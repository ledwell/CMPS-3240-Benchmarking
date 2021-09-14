/* NAME: SPENCER LEDWELL    */
/* ORGN: CSUB CS3240 */
/* DATE: 13 SEP 2021 */
/* PROF: ALBERT CRUZ */

#include <stdio.h>
#include <stdlib.h>

//  The benchmark function. fdot takes two float arrays and a scalar as 
//  input. It multiplys the two arrays, element by element, storing the results in Result.
//

float Result;

float fdot(int length, float *X, float *Y) {
   for( int i = 0; i < length; i++ )
   Result =+  X[i] *  Y[i];
    return Result; 
}

//  The benchmark
int main( void ) {
     const int N = 200000000; 
     printf( "Running FDOT operation of size %d x 1\n", N );
     float *X = (float *) malloc( N * sizeof(float) );      // First vector
     float *Y = (float *) malloc( N * sizeof(float) );      // Second vector

     // Carry out the operation
     fdot(N,X,Y);

     // Free up the memory
     free( X );
     free( Y );

     return 0;
}
