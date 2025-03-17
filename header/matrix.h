#include <stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include <math.h>


//BASIC
void printMatrix(int rows, int cols, int matrix[rows][cols]){
int i=0,j=0;
for(i;i<rows;i++){
    for(j=0;j<cols;j++){
        printf("%d",matrix[i][j]);
        printf(" ");
    }
    printf("\n");
}
}


void initializeMatrix(int rows, int cols, int matrix[rows][cols], int value){
    int i=0,j=0;
for(i;i<rows;i++){
    for(j=0;j<cols;j++){
        matrix[i][j]=value;
    }
}}


void inputMatrix(int rows, int cols, int matrix[rows][cols]){
    int i=0,j=0;
for(i;i<rows;i++){
    for(j=0;j<cols;j++){
        printf("enter the value of[%d][%d]of the matrix",i,j);
        scanf("%d",&matrix[i][j]);
    }
    
}

}


//Matrix Arithmetic
void addMatrices(int rows, int cols, int mat1[rows][cols], int mat2[rows][cols], int result[rows][cols]){
   int i=0,j=0;
for(i;i<rows;i++){
    for(j=0;j<cols;j++){
        result[i][j]=mat1[i][j]+mat1[i][j];
    }
}
}


void subtractMatrices(int rows, int cols, int mat1[rows][cols], int mat2[rows][cols],int result[rows][cols]){
       int i=0,j=0;
for(i;i<rows;i++){
    for(j=0;j<cols;j++){
        result[i][j]=mat1[i][j]-mat1[i][j];
    }
}
}


void scalarMultiplyMatrix(int rows, int cols, int matrix[rows][cols], int scalar){
    int i=0,j=0;
for(i;i<rows;i++){
    for(j=0;j<cols;j++){
        matrix[i][j]=scalar+matrix[i][j];
    }
    
}
}


void multiplyMatrices(int rows1, int cols1, int mat1[rows1][cols1], int rows2, int cols2, int mat2[rows2][cols2], int result[rows1][cols2]){
    if(cols1==rows2){
        int i=0,j=0,k=0,h=0,l;
     for(i=0;i<cols1;i++){
        h=0;
        for(l=0;l<cols2;l++){
        j=0;
        result[i][h]=0;
        for(k=0;k<rows2;k++){
            result[i][h]=result[i][h]+mat1[i][j]*mat2[k][h];
            j++;
        }
        h++; 
     }}

    }
}
//Matrix Properties and Checks 

bool isSquareMatrix(int rows, int cols){
     if(rows==cols)
     return(true);
     else
     return(false);
 }


bool isIdentityMatrix(int size, int matrix[size][size]){

        int i=0,j=0;
for(i;i<size;i++){
    for(j=0;j<size;j++){
        if(j==i&& matrix[i][j]!=1)
        return false;
        if(j!=i&&matrix[i][j]!=0)
        return false;
       
    } 
}
return true;
}


bool isDiagonalMatrix(int size, int matrix[size][size]){
  int i,j;
  for(i=0;i<size;i++){
  for(j=0;j<size;j++){
   if(matrix[i][j]!=0 && i!=j)
   return(false);
  }}
  return(true);}


bool isSymmetricMatrix(int size, int matrix[size][size]){
 int i,j;
  for(i=0;i<size;i++){
  for(j=0;j<size;j++){
   if(matrix[i][j]!=matrix[j][i])
   return(false);
  }}
  return(true);} 


bool isUpperTriangular(int size, int matrix[size][size]){
    int i=0,j=0;
    for(i;i<size;i++){
    for(j=0;j<size;j++){
        if(j==i)
        break;
        if(i>j&&matrix[i][j]!=0)
        return false;
       
    } 
}
return true;
}
// Matrix Operations 

void transposeMatrix(int rows, int cols, int matrix[rows][cols], int result[cols][rows]){
 int i,j;
  for(i=0;i<rows;i++){
  for(j=0;j<cols;j++){
   result[j][i]=matrix[i][j];}}}


void Minor(int size,int matrix[size][size],int submatrix[size-1][size-1],int row,int col){
    if(size>1){
     int i=0,j=0,k=0,h=0,l;
     for(i=0;i<size;i++){
        h=0;
     if(i==row)
     continue;
     for(j=0;j<size;j++){
        if(j==col)continue;
        submatrix[k][h]=matrix[i][j];
        h++;
     }

     k++;
     }

    }
    else {
         printf("Error: Condition not satisfied.\n");
        exit(EXIT_FAILURE);
    }
    
    }



int determinantMatrix(int size, int matrix[size][size]){
    int D=0,i,j=0,sign=1;
    if(1==size){
        D=matrix[0][0];
        return D;
    }
    if(2==size){
        D=matrix[0][0]*matrix[1][1]-matrix[0][1]*matrix[1][0];
    }
    else{
        int submatrix[size-1][size-1];
        for(i=0;i<size;i++){
            Minor(size,matrix,submatrix,0,i);
          D=D+sign*matrix[0][j]*determinantMatrix(size-1,submatrix);
          j++;
          sign=-sign;
        }
    }
    return D;
}

void matrixPower(int size, int matrix[size][size], int power, int result[size][size]){
	int i,j,k,temp[size][size];
 if(power>=1){
  for(i=0;i<size;i++){
  for(j=0;j<size;j++){
   result[j][i]=matrix[j][i];}}}
 for(k=2;k<=power;k++){
 multiplyMatrices(size,size,matrix,size,size,result,temp);
 for(i=0;i<size;i++){
  for(j=0;j<size;j++){
   result[i][j]=temp[i][j];}}}}


//  Advanced Matrix Functions 1 


void cofactorMatrix(int size, int matrix[size][size], int cofactor[size][size]){
    int sub[size-1][size-1],i,j;
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
        Minor(size,matrix,sub,i,j);
        cofactor[i][j]=pow(-1,i+j)  *(determinantMatrix(size-1,sub));}
    }
}


void adjointMatrix(int size, int matrix[size][size], int adjoint[size][size]){
 int temp[size][size];
 cofactorMatrix(size,matrix,temp);
 transposeMatrix(size,size,temp,adjoint);
   }



// Special Matrix Operations 


int traceMatrix(int size, int matrix[size][size]){
    int trace=0,i;
    for(i=0;i<size;i++)
    trace=trace+matrix[i][i];
    return trace;
}

void rotateMatrix90(int size, int matrix[size][size]){
        int temp[size][size]; 
        int i,j;
    for (i=0;i<size;i++) {
        for (j=0;j<size;j++) {
            temp[j][size-i-1] = matrix[i][j];
        }
    }
    for (i=0;i <size; i++) {
        for ( j=0;j<size; j++) {
            matrix[i][j] = temp[i][j];
        }
    }

}
