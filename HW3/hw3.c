/*
 Homework 3
 
 Jack Li
 604754714
 May 23 2018
 CS 33 (1D)
 
 Textbook Problem 6.45
 
 
 Optimization techniques used:
 1) blocking,
 2) precomputing inner loop conditions for two inner most loops
 3) precomputing i1 * dim
 */


void transpose(int *dst, int *src, int dim)
{
    const int BLOCK_SIZE = 16;
    int i, j, i1, j1, i1_limit, j1_limit, i1dim;
    
    for (i = 0; i < dim; i += BLOCK_SIZE) {
        i1_limit = i + BLOCK_SIZE < dim ? i + BLOCK_SIZE : dim;
        for (j = 0; j < dim; j += BLOCK_SIZE) {
            j1_limit = j + BLOCK_SIZE < dim ? j + BLOCK_SIZE : dim;
            for (i1 = i; i1 < i1_limit; i1++) {
                i1dim = i1 * dim;
                for (j1 = j; j1 < j1_limit; j1++) {
                    dst[j1 * dim + i1] = src[i1dim + j1];
                }
            }
        }
    }
}
