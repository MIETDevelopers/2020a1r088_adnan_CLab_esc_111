// Program to print the Fibonacci sequence using recursion

#include<stdio.h>
int fib(int n){
    if(n == 0 || n == 1)
        return n;
    return (fib(n-1) + fib(n-2));  
}

int main(){
    int n, i;
    printf("Enter the value of n: \n");
    scanf("%d", &n);
    printf("%d\t", 0);
    for (i = 1; i <= n; i++)
    {
        printf("%d\t", fib(i));
    }  
    return 0;
}
