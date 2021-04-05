// Program to perform matrix multiplication.

#include<stdio.h>
int main(){
    int matA[10][10], matB[10][10], matC[10][10];
    int i, j, k, sum=0, nRowsA, nColsA, nRowsB, nColsB;

    //Size of Matrix A
    printf("Size of Matrix A.....: \n");
    printf("Enter no. of Rows (Max is 10): \n");
    scanf("%d", &nRowsA);
    printf("Enter no. of Columns (Max is 10): \n");
    scanf("%d", &nColsA);

    //Size of Matrix B
    printf("Size of Matrix B.....: \n");
    printf("Enter no. of Rows (Max is 10): \n");
    scanf("%d", &nRowsB);
    printf("Enter no. of Columns (Max is 10): \n");
    scanf("%d", &nColsB);

    if (nColsA == nRowsB){
    // Input Elements for Matrix A
        printf("Enter the Elements of Matrix A: \n");
        for (i = 0; i < nRowsA; i++)
        {
            for (j = 0; j < nColsA; j++)
            {
                printf("matA[%d][%d] = ", i, j);
                scanf("%d", &matA[i][j]);
            }
            printf("\n");
        }
    // Input Elements for Matrix B
        printf("Enter the Elements of Matrix B: \n");
        for (i = 0; i < nRowsB; i++)
        {
            for (j = 0; j < nColsB; j++)
            {
                printf("matB[%d][%d] = ", i, j);
                scanf("%d", &matB[i][j]);
            }
            printf("\n");
        }    
    // For Multiplying Matrices
    for (i = 0; i < nRowsA; i++)
    {
        for (j = 0; j < nColsA; j++)
        {
            for (k = 0; k < nColsB; k++)
            {
                sum+= (matA[i][k] * matB[k][j]);
            }
            matC[i][j] = sum;
            sum = 0;
        }
    }

    // For printing Resultant Matrix C
    printf("Resultant Matrix: \n");
    for (i = 0; i < nRowsA; i++)
    {
        for (j = 0; j < nColsB; j++)
        {
            printf("matC[%d][%d] = %d\t", i, j, matC[i][j]);
        }
        printf("\n");
    }
  }
  else{
        printf("Matrices can't be Multiplied. No. of Columns of A must be equal to No. of Rows of B.\n");
    }
    return 0;
}