//OpenMP version.  Edit and submit only this file.
/* Enter your details below
 * Name : Jack Li
 * UCLA ID: 604754714
 * Email id: jackli2014@gmail.com
 * Input : New files
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

void OMP_GaussianBlur(double *u, double Ksigma)
{
    double lambda = (Ksigma * Ksigma) / 6.0;
    double nu = (1.0 + 2.0*lambda - sqrt(1.0 + 4.0*lambda))/(2.0*lambda);
    int x, y, z, step, index;
    double boundryScale = 1.0 / (1.0 - nu);
    double postScale = pow(nu / lambda, 9.0);
    
    const int x_Max = xMax;
    const int y_Max = yMax;
    const int z_Max = zMax;
    const int xyMax = y_Max * x_Max;
    
    omp_set_num_threads(8);
    for(step = 0; step < 3; step++)
    {
        #pragma omp parallel for private (y, x, index) //collapse(3) //loop 1-3
        for(z = 0; z < z_Max; z++)  //loop 2
        {
            for(y = 0; y < y_Max; y++)
            {
                index = z * xyMax + y * x_Max;
                u[index] *= boundryScale;   //loop 1
                index++;
                for( x = 1; x < x_Max; x++) //loop 2
                {
                    //index = z * xyMax + y * x_Max + x;
                    u[index] += u[index - 1] * nu;
                    index++;
                }
                index -= x_Max;
                u[index] *= boundryScale; //loop 3
            }
        }
        /*
        #pragma omp parallel for private (y, index) collapse(2)
        for(z = 0; z < z_Max; z++) //loop 1
        {
            for(y = 0; y < y_Max; y++)
            {
                index = z * xyMax + y * x_Max;
                u[index] *= boundryScale;
            }
        }
        
        #pragma omp parallel for private (y, x, index) collapse(3)
        for(z = 0; z < z_Max; z++)  //loop 2
        {
            for(y = 0; y < y_Max; y++)
            {
                for( x = 1; x < x_Max; x++)
                {
                    index = z * xyMax + y * x_Max + x;
                    u[index] += u[index - 1] * nu;
                }
            }
        }
        #pragma omp parallel for private (y, index) collapse(2)
        for(z = 0; z < z_Max; z++) //loop 3
        {
            for(y = 0; y < y_Max; y++)
            {
                index = z * xyMax + y * x_Max;
                u[index] *= boundryScale;
            }
        }
         */
        #pragma omp parallel for private (y, x, index) collapse(3)
        for(z = 0; z < z_Max; z++) //loop 4
        {
            for(y = 0; y < y_Max; y++)
            {
                for(x = x_Max - 2; x >= 0; x--)
                {
                    index = z * xyMax + y * x_Max + x;
                    u[index] += u[index + 1] * nu;
                }
            }
        }
        /*
        #pragma omp parallel for private (y, x, index) //collapse(3)
        for(z = 0; z < z_Max; z++) //loop 5-6
        {
            index = z * xyMax;
            for (x = 0; x < x_Max; x++) {
                u[index] *= boundryScale;
                index++;
            }
            for(y = 1; y < y_Max; y++)
            {
                for (x = 0; x < x_Max; x++) {
                    u[index] += u[index - x_Max] * nu;
                    index++;
                }
            }
        }
        */
        
        #pragma omp parallel for private (x, index) collapse(2)
        for(z = 0; z < z_Max; z++) //loop 5
        {
            for(x = 0; x < x_Max; x++)
            {
                index = z * xyMax + x;
                u[index] *= boundryScale;
            }
        }
        #pragma omp parallel for private (y, x, index) collapse(3)
        for(z = 0; z < z_Max; z++) //loop 6
        {
            for(y = 1; y < y_Max; y++)
            {
                for(x = 0; x < x_Max; x++)
                {
                    index = z * xyMax + y * x_Max + x;
                    u[index] += u[index - x_Max] * nu;
                }
            }
        }
        #pragma omp parallel for private (x, index) collapse(2)
        for(z = 0; z < z_Max; z++) //loop 7
        {
            for(x = 0; x < x_Max; x++)
            {
                index = z * xyMax + (y_Max - 1) * x_Max + x;
                u[index] *= boundryScale;
            }
        }
        #pragma omp parallel for private (y, x, index) collapse(3)
        for(z = 0; z < z_Max; z++) //loop 8
        {
            for(y = y_Max - 2; y >= 0; y--)
            {
                for(x = 0; x < x_Max; x++)
                {
                    index = z * xyMax + y * x_Max + x;
                    u[index] += u[index + x_Max] * nu;
                }
            }
        }
         
        /*
        #pragma omp parallel for private (y, x, index) collapse(3)
        for(z = z_Max - 1; z >= 0; z--) //loop 7-8
        {
            for(y = y_Max - 1; y >= 0; y--)
            {
                for(x = x_Max - 1; x >= 0; x--)
                {
                    index = z * xyMax + y * x_Max + x;
                    if (y != y_Max - 1) {
                        u[index] += u[index + x_Max] * nu;
                    }
                    else{
                        u[index] *= boundryScale;
                    }
                }
            }
        }
         */
        #pragma omp parallel for private (x, index) collapse(2)
        for(y = 0; y < y_Max; y++) //loop 9
        {
            for(x = 0; x < x_Max; x++)
            {
                index = y * x_Max + x;
                u[index] *= boundryScale;
            }
        }
        //#pragma omp parallel for private (y, x, index) collapse(3)
        for(z = 1; z < z_Max; z++) //loop 10
        {
            #pragma omp parallel for private (x, index) collapse(2)
            for(y = 0; y < y_Max; y++)
            {
                for(x = 0; x < x_Max; x++)
                {
                    index = z * xyMax + y * x_Max + x;
                    u[index] = u[index - xyMax] * nu;
                }
            }
        }
        #pragma omp parallel for private (x, index) collapse(2)
        for(y = 0; y < y_Max; y++) //loop 11
        {
            for(x = 0; x < x_Max; x++)
            {
                index = (z_Max - 1) * xyMax + y * x_Max + x;
                u[index] *= boundryScale;
            }
        }
        //#pragma omp parallel for private (y, x, index) collapse(3)
        for(z = z_Max - 2; z >= 0; z--) //loop 12
        {
            #pragma omp parallel for private (x, index) collapse(2)
            for(y = 0; y < y_Max; y++)
            {
                for(x = 0; x < x_Max; x++)
                {
                    index = z * xyMax + y * x_Max + x;
                    u[index] += u[index + xyMax] * nu;
                }
            }
        }
    }
    #pragma omp parallel for private (y, x, index) collapse(3)
    for(z = 0; z < z_Max; z++)
    {
        for(y = 0; y < yMax; y++)
        {
            for(x = 0; x < x_Max; x++)
            {
                index = z * xyMax + y * x_Max + x;
                u[index] *= postScale;
            }
        }
    }
}

void OMP_Deblur(double* u, const double* f, int maxIterations, double dt, double gamma, double sigma, double Ksigma)
{
    
    double epsilon = 1.0e-7;
    double sigma2 = SQR(sigma);
    int x, y, z, iteration, index;
    int converged = 0;
    int lastConverged = 0;
    int fullyConverged = (xMax - 1) * (yMax - 1) * (zMax - 1);
    double* conv = OMP_conv;
    double* g = OMP_g;
    double conv_temp, f_temp, temp, r, g1, g2, g3, g4, g5, g6;
    
    const int x_Max = xMax;
    const int y_Max = yMax;
    const int z_Max = zMax;
    const int xyMax = y_Max * x_Max;
    const int max = z_Max * xyMax;
    
    omp_set_num_threads(8);
    for(iteration = 0; iteration < maxIterations && converged != fullyConverged; iteration++)
    {
        #pragma omp parallel for private (y, x, index, temp, g1, g2, g3, g4, g5, g6) collapse(3)
        for(z = 1; z < z_Max - 1; z++) //loop 1
        {
            for(y = 1; y < y_Max - 1; y++)
            {
                for(x = 1; x < x_Max - 1; x++)
                {
                    index = z * xyMax + y * x_Max + x;
                    temp = u[index];
                    g1 = temp - u[index + 1];
                    g2 = temp - u[index - 1];
                    g3 = temp - u[index + x_Max];
                    g4 = temp - u[index - x_Max];
                    g5 = temp - u[index + xyMax];
                    g6 = temp - u[index - xyMax];
                    g[index] = 1.0 / sqrt(epsilon + g1 * g1 + g2 * g2 + g3 * g3 + g4 * g4 + g5 * g5 + g6 * g6);
                }
            }
        }
        memcpy(conv, u, sizeof(double) * max);
        OMP_GaussianBlur(conv, Ksigma);
        #pragma omp parallel for private (y, x, index, conv_temp, f_temp, r) collapse(3)
        for(z = 0; z < z_Max; z++) //loop 2
        {
            for(y = 0; y < y_Max; y++)
            {
                for(x = 0; x < x_Max; x++)
                {
                    index = z * xyMax + y * x_Max + x;
                    conv_temp = conv[index];
                    f_temp = f[index];
                    r = conv_temp * f_temp / sigma2;
                    r = (r * (2.38944 + r * (0.950037 + r))) / (4.65314 + r * (2.57541 + r * (1.48937 + r)));
                    conv[index] = conv_temp - f_temp * r;
                }
            }
        }
        OMP_GaussianBlur(conv, Ksigma);
        converged = 0;
        for(z = 1; z < z_Max - 1; z++) //loop 3
        {
            for(y = 1; y < y_Max - 1; y++)
            {
                for(x = 1; x < x_Max - 1; x++)
                {
                    index = z * xyMax + y * x_Max + x;
                    double oldVal = u[index];
                    g1 = g[index - 1];
                    g2 = g[index + 1];
                    g3 = g[index - x_Max];
                    g4 = g[index + x_Max];
                    g5 = g[index - xyMax];
                    g6 = g[index + xyMax];
                    double newVal = (oldVal + dt * (
                                                               u[index - 1] * g1 +
                                                               u[index + 1] * g2 +
                                                               u[index - x_Max] * g3 +
                                                               u[index + x_Max] * g4 +
                                                               u[index - xyMax] * g5 +
                                                               u[index + xyMax] * g6 - gamma * conv[index])) /
                    (1.0 + dt * (g2 + g1 + g4 + g3 + g6 + g5));
                    if(fabs(oldVal - newVal) < epsilon)
                    {
                        converged++;
                    }
                    u[index] = newVal;
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
