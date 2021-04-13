// Write a C program to perform 2-dimensional matrix multiplication passing the two dynamic sized matrices to functions.

#include <stdio.h>
#include <stdlib.h>

    void getMatrix(int *arr,int r,int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("Enter element [%d][%d] = ", i, j);
            scanf("%d",(arr+i * c+j));
        } 
        printf("\n");
    }
    }

    void Multiplication(int *arr1, int *arr2, int *result, int r1,int c1,int r2,int c2){
    for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                *(result + i*c2+j)= 0;
                for (int c = 0; c < r2; c++)
                {
                    *(result + i * c2 + j) += *(arr1+i * r2+c) * *(arr2 + c * c2 + j);
                }
            }
        }
    }

    void printMatrix(int *arr,int r,int c){
    for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                printf("%d\t", *(arr+i * c+j));
            }
            printf("\n");
        }

    }
int main()
{
    
    int m, n, r, s;
    printf("Enter no of rows for Matrix A :\n");
    scanf("%d", &m);
    printf("Enter no of columns for Matrix A :\n");
    scanf("%d", &n);
    printf("Enter no of rows for Matrix B :\n");
    scanf("%d", &r);
    printf("Enter no of columns for Matrix B :\n");
    scanf("%d", &s);

    if(n==r){
        
    int *arr1=(int *)malloc(m * n * sizeof(int));
    int *arr2=(int *)malloc(r * s * sizeof(int));
    int *result=(int *)malloc(m * s * sizeof(int));    
    getMatrix(arr1,m,n);
    printf("Enter Matrix B\n");
    getMatrix(arr2,r,s);
    Multiplication(arr1, arr2, result, m, n, r, s);
    printMatrix(result,m,s);
    }   
    else {
        printf("Matrices can't be Multiplied. No. Cols in Matrix A must be equal to N. of Rows in Matrix B.\n");
    }
}
