//OpenMP version.  Edit and submit only this file.
/* Enter your details below
 * Name : Jack Li
 * UCLA ID: 604754714
 * Email id: jackli2014@gmail.com
 */

#include <math.h>
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

int OMP_xMax;
#define xMax OMP_xMax
int OMP_yMax;
#define yMax OMP_yMax
int OMP_zMax;
#define zMax OMP_zMax

int OMP_Index(int x, int y, int z)
{
	return ((z * yMax + y) * xMax + x);
}
#define Index(x, y, z) OMP_Index(x, y, z)

double OMP_SQR(double x)
{
	return pow(x, 2.0);
}
#define SQR(x) OMP_SQR(x)

double* OMP_conv;
double* OMP_g;

void OMP_Initialize(int xM, int yM, int zM)
{
	xMax = xM;
	yMax = yM;
	zMax = zM;
	assert(OMP_conv = (double*)malloc(sizeof(double) * xMax * yMax * zMax));
	assert(OMP_g = (double*)malloc(sizeof(double) * xMax * yMax * zMax));
}
void OMP_Finish()
{
	free(OMP_conv);
	free(OMP_g);
}

void OMP_GaussianBlur(double *u, double Ksigma, int stepCount)
{
	double lambda = (Ksigma * Ksigma) / (double)(stepCount + stepCount);
    double lambda2 = lambda + lambda;
	double nu = (1.0 + lambda2 - sqrt(1.0 + lambda2 + lambda2))/(lambda2);
    int step, x, x1, x1_limit;
	double boundryScale = 1.0 / (1.0 - nu);
	double postScale = pow(nu / lambda, (double)(stepCount + stepCount + stepCount));
    
    const int x_Max = xMax;
    const int y_Max = yMax;
    const int z_Max = zMax;
    const int xyMax = x_Max * y_Max;
    const int max = xyMax * z_Max;
    
    //omp_set_num_threads(8);
    for(step = 0; step < stepCount; step++)
    {
        #pragma omp parallel for private (x, x1_limit, x1)
        for (x = 0; x < max; x += x_Max) { //loop 1-3
            u[x] *= boundryScale;  //loop 1
            //x1_limit = x + x_Max;
            for (x1 = x + 1; x1 < x + x_Max; x1++) { //loop 2
                u[x1] += u[x1 - 1] * nu;
            }
            u[x] *= boundryScale; //loop 3
        }
        #pragma omp parallel for private (x, x1_limit, x1)
        for (x = max - 2; x >= 0; x--) { //loop 4
            if (((x >> 7) << 7) != x && (((x + 1) >> 7) << 7) != (x + 1)) {
                u[x] += u[x + 1] * nu;
            }
            /*
            x1_limit = x - x_Max + 1; //> -1 ? x - xMax_minus_one : -1;
            for (x1 = x; x1 > x1_limit; x1--) {
                u[x1] += u[x1 + 1] * nu;
            }
             */
        }
        #pragma omp parallel for private (x, x1_limit, x1)
        for (x = 0; x < max; x += xyMax) { //loop 5-6
            x1_limit = x + x_Max;
            for (x1 = x; x1 < x1_limit; x1++) {  //loop 5
                u[x1] *= boundryScale;
            }
            x1_limit = x + xyMax;
            for (; x1 < x1_limit; x1++) {  //loop 6
                u[x1] += u[x1 - x_Max] * nu;
            }
        }
        #pragma omp parallel for private (x, x1_limit, x1)
        for (x = max - 1; x > -1; x -= xyMax) { //loop 7-8
            x1_limit = x - x_Max;
            for (x1 = x; x1 > x1_limit; x1--) { //loop 7
                u[x1] *= boundryScale;
            }
            x1_limit = x - xyMax;
            for (; x1 > x1_limit; x1--) {  //loop 8
                u[x1] += u[x1 + x_Max] * nu;
            }
        }
        #pragma omp parallel for private (x)
        for (x = 0; x < xyMax; x++) { //loop 9
            u[x] *= boundryScale;
        }
        
        for (x = xyMax; x < max; x++) { //loop 10
            u[x] = u[x - xyMax] * nu;
            //u[x + 1] = u[x + 1 - xyMax] * nu;
        }
        //x--;
        
        #pragma omp parallel for private (x)
        for (x = x - 1; x > max - xyMax; x--) { //loop 11
            u[x] *= boundryScale;
        }
        x--;
        for (; x >= 0; x--) { //loop 12
            u[x] += u[x + xyMax] * nu;
        }
        
    }
    #pragma omp parallel for private (x)
    for (x = 0; x < max; x++) {
        u[x] *= postScale;
    }
}

void OMP_Deblur(double* u, const double* f, int maxIterations, double dt, double gamma, double sigma, double Ksigma)
{
    const int x_Max = xMax;
    const int y_Max = yMax;
    const int z_Max = zMax;
    const int xyMax = x_Max * y_Max;
    const int max = z_Max * y_Max * x_Max;
    const int max2 = (z_Max - 2) * y_Max * x_Max + (y_Max - 2) * x_Max + x_Max - 1;
    
	double epsilon = 1.0e-7;
	double sigma2 = SQR(sigma);
    int iteration, x, xlimit, i;
	int converged = 0;
	int lastConverged = 0;
	int fullyConverged = (x_Max - 1) * (y_Max - 1) * (z_Max - 1);
	double* conv = OMP_conv;
	double* g = OMP_g;
    double temp, f_temp, r, g1, g2, g3, g4, g5, g6, oldVal, newVal;
    
    omp_set_num_threads(8);
    for(iteration = 0; iteration < maxIterations && converged != fullyConverged; iteration++)
    {
        #pragma omp parallel sections
        {
            #pragma omp parallel for private(x, xlimit, i, temp)
            for (x = 16513; x < max2; x += 256) { //loop 1
                xlimit = x + 16127;
                for (; x < xlimit; x += 2) {
                    for (i = 0; i < 126; i++) {
                        temp = u[x];
                        g1 = temp - u[x + 1];
                        g2 = temp - u[x - 1];
                        g3 = temp - u[x + x_Max];
                        g4 = temp - u[x - x_Max];
                        g5 = temp - u[x + xyMax];
                        g6 = temp - u[x - xyMax];
                        g[x] = 1.0 / sqrt(epsilon +
                                          g1 * g1 +
                                          g2 * g2 +
                                          g3 * g3 +
                                          g4 * g4 +
                                          g5 * g5 +
                                          g6 * g6);
                        x++;
                    }
                }
            }
            #pragma omp section
            memcpy(conv, u, sizeof(double) * max);
        }
        OMP_GaussianBlur(conv, Ksigma, 3);
        #pragma omp parallel for private (x, temp, f_temp, r)
        for (x = 0; x < max; x++) {
            temp = conv[x];
            f_temp = f[x];
            r = temp * f_temp/ sigma2;
            r = (r * (2.38944 + r * (0.950037 + r))) / (4.65314 + r * (2.57541 + r * (1.48937 + r)));
            conv[x] = temp - f_temp * r;
        }
        OMP_GaussianBlur(conv, Ksigma, 3);
        converged = 0;
//#pragma omp parallel for private (x, xlimit, i, g1, g2, g3, g4, g5, g6, oldVal, newVal) reduction (+:converged)
        for (x = 16513; x < max2; x += 256) { //loop 3
            xlimit = x + 16127;
            for (; x < xlimit; x += 2) {
                for (i = 0; i < 126; i++) {
                    g1 = g[x - 1];
                    g2 = g[x + 1];
                    g3 = g[x - x_Max];
                    g4 = g[x + x_Max];
                    g5 = g[x - xyMax];
                    g6 = g[x + xyMax];
                    oldVal = u[x];
                    newVal = (oldVal + dt * (
                                             u[x - 1] * g1 +
                                             u[x + 1] * g2 +
                                             u[x - x_Max] * g3 +
                                             u[x + x_Max] * g4 +
                                             u[x - xyMax] * g5 +
                                             u[x + xyMax] * g6 - gamma * conv[x])) /
                    (1.0 + dt * (g2 + g1 + g4 + g3 + g6 + g5));
                    if(fabs(oldVal - newVal) < epsilon)
                    {
                        converged++;
                    }
                    u[x] = newVal;
                    x++;
                }
            }
        }
        if(converged > lastConverged)
        {
            printf("%d pixels have converged on iteration %d\n", converged, iteration);
            lastConverged = converged;
        }
    }
}
