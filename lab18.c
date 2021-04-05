// Program to search an element in an array using linear search.

#include<stdio.h>
int main(){
    int a[50];
    int x, i, n, element;
    
    printf("Enter the size of Array. (Max is 50):\n");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter element %d of the Array: \n", (i+1));
        scanf("%d", &a[i]);
    }
    printf("Enter an Element to Search: \n");
    scanf("%d", &x);

    // For Searching an Array.
    for (i = 0; i < n; i++)
    {
        if (x == a[i])
        {
           element = 1;
           break;
        }
    }
    if(element == 1){
        printf("Element Found.\n%d is present at loction %d in the Array.\n", x, (i+1));
    }
    else{
        printf("%d is not present in the Array. \n", x);
    }
    return 0;
}