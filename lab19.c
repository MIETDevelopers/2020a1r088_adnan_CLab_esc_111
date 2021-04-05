// Program to read and print elements in two dimensional arrays.

#include<stdio.h>
int main()
{
    int arr[5][5];
    int i, j, nRows, nCols;

    printf("Enter the Number of Rows. (Max is 5): \n");
    scanf("%d", &nRows);
    printf("Enter the Number of Columns. (Max is 5): \n");
    scanf("%d", &nCols);
    // For Input
    for (i = 0; i < nRows; i++)
    {
        for (j = 0; j < nCols; j++)
        {
            printf("Enter arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }
    // For printing the Array Elements.
    for (i = 0; i < nRows; i++)
    {
        for (j = 0; j < nCols; j++)
        {
            printf("arr[%d][%d] = %d\t", i, j, arr[i][j]);
        }
        printf("\n");
    }  
    return 0;
}
