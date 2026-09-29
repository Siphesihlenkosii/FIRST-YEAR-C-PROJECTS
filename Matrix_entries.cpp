#include <iostream>
int main(){
 //declare the dimensions of the matrices
 const int NUM_ROWS= 5;
 const int NUM_COLOUMN= 6;

 //define matrices of arrays
 int matrixA[NUM_ROWS[NUM_COLOUMN];
 int matrixB[NUM_ROWS][NUM_COLOUMN];

 int nrNotSame= 0;

 for (int i=0; i<NUM_ROWS; i++)
 {
     for(int k=0; k<NUM_ROWS; k++ )
     {
         if (matrixA[i][k]!= matrixB[i][k])
         {
             nrNotSame ++;
         }
     }
 }
std::cout<<"The Number of matrix elements that are not indentical: "<< nrNotSame<<std::endl;

}
