/* NAME: SPENCER LEDWELL    */
/* ORGN: CSUB CS3240 */
/* DATE: 13 SEP 2021 */
/* INST: DR ALBERT CRUZ */
/* ASGN: ACTIVITY 1 */

#include <stdio.h>
#include <stdlib.h>

// DGEMM function from the Book
void dgemm( int length, double *X, double *Y, double *Result ) 
{
     for (int i = 0; i < length; i++)
          for (int j = 0; j< length; j++)
          {
              double cij = Result[i+j*length];
              for (int k = 0; k<length; k++)
                   cij += X[i+k*length] * Y[k+j*length];
              Result[i+j*length] = cij;
          }
}

//  The benchmark 
int main( void ) 
{
     const int N = 1024; // The benchmark runs on a fixed size of work
     printf( "Running DGEMM  operation of size %d x 1\n", N );
     double *X = (double *) malloc( N * N * sizeof(double) );      // First Matrix
     double *Y = (double *) malloc( N * N * sizeof(double) );      // Second Matrix
     double *Result = (double *) malloc( N * N * sizeof(double) ); // Result Matrix

// Carry out the operation
     dgemm(N,X,Y,Result);

// Free up the memory
     free( X );
     free( Y );
     free( Result );

return 0;
}
