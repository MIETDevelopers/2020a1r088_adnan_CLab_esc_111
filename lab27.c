#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    int *ptr, *ptr1;
    int N, n, i;

    //Use of malloc
    printf("Enter the size of the array1.\n");
    scanf("%d", &N);

    ptr = (int *)malloc(N * sizeof(int));
    for (i = 0; i < N; i++)
    {
        printf("Enter Element %d of the array1\n", (i+1));
       scanf("%d", &ptr[i]);
    }

    for (i = 0; i < N; i++)
    {
        printf("The Element %d of array1 is %d\n", (i+1), ptr[i]);
    }

    printf("\n");

    //Use of calloc
    printf("Enter the size of Array2. \n");
    scanf("%d", &n);

    ptr1 = (int *)calloc(n , sizeof(int));
    for (i = 0; i < n; i++)
    {
       printf("Enter the element %d of array2: \n", (i + 1));
       scanf("%d", &ptr1[i]);
    }

    for (i = 0; i < n; i++)
    {
        printf("The element %d of array2 is %d\n", (i+1), ptr1[i]);
    }

    printf("\n");

    //Use of realloc
    printf("Enter the size of the new array.\n");
    scanf("%d", &n);

    ptr1 = (int *)realloc(ptr1 , n*sizeof(int));
    for (i = 0; i < n; i++)
    {
        printf("Enter the element %d of new array:\n", (i+1));
        scanf("%d", &ptr1[i]);
    }

    for (i = 0; i < n; i++)
    {
        printf("The element %d of new array is %d\n", (i+1), ptr1[i]);
    }

    // Freeing Memory.
    free(ptr);
    free(ptr1);

    return 0;
}
