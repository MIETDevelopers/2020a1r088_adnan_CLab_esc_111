// Program to sort an array using bubble sort.

#include<stdio.h>
int main(){
    int a[50];
    int temp, i, j, n;
    
    printf("Enter the size of Array. (Max is 50):\n");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter element %d of the Array: \n", (i+1));
        scanf("%d", &a[i]);
    }
    // For Sorting an Array.
    for (i = 0; i < (n-1); i++)
    {
        for (j = 0; j < (n-1); j++)
        {
            if (a[j] > a[j+1]){
            temp = a[j];
            a[j] = a[j+1];
            a[j+1] = temp;
        }    
        }        
    }
    // For Printing Sorted Array
    printf("Sorted Array: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    return 0;
}