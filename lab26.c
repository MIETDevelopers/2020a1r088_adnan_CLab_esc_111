// Program to differentiate pass by value and pass by reference by swapping two numbers using function.

#include<stdio.h>
// Swapping Using Pass By Value
int swap1(int x, int y){
    int temp = x;
    x = y;
    y = temp;
    printf("After swapping x = %d & y = %d\n", x, y);
}
// Swapping Using Pass By Reference
int swap2(int *ptr1, int *ptr2){
    int temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main()
{
    int a = 5, b = 10;
    // Pass by value
    printf("Before swapping x = %d & y = %d\n", a, b);
    swap1(a, b);
    printf("\n");
    // Pass by reference
    printf("Before swapping x = %d & y = %d\n", a, b);
    swap2(&a, &b);
    printf("After swapping x = %d & y = %d\n", a, b);
    return 0;
}
