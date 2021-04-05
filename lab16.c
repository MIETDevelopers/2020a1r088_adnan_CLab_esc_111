// Program to find the maximum element and index in the array.

#include<stdio.h>
int main(){
    int arr[5];
    int max, i, maxIndex;

    for (i = 0; i < 5; i++)
    {
        printf("Enter element %d of the Array: \n", (i+1));
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    for (i = 0; i < 5; i++)
    {
        if (max  < arr[i])
        {
            max = arr[i];
            maxIndex = i;
        }
    }
    printf("Maximum element in an Array is %d \n", max);
    printf("Maximum element is present at loaction %d. \n", maxIndex+1);
    return 0;
}