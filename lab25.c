// Program to calculate factorial of a number using recursion.

#include<stdio.h>
int fact(int n){
    if (n <= 1)
        return 1;
    return (n * fact(n-1));
}

int main(){
    int n;
    printf("Enter a Number: \n");
    scanf("%d", &n);

    if (n < 1)
    {
        printf("Factorial is not defined for a negative No.\n");
    }
    else{
        printf("Factorial of %d is %d", n, fact(n));
    }
    return 0;
}
