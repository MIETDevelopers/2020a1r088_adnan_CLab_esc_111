// Program to create Simple Calculator using switch case and function for every operation.

#include<stdio.h>
// For Addition
float add(float a, float b){
    float result;
    result = a + b;
    return result;
}
// For Subtraction
float sub(float a, float b){
    float result;
    result = a - b;
    return result;
}
// For Multiplication
float mul(float a, float b){
    float result;
    result = a * b;
    return result;
}
// For Division
float div(float a, float b){
    float result;
    result = a / b;
    return result;
}

int main(){
    float a, b; 
    int option;
    printf("Enter first number: \n");
    scanf("%f", &a);
    printf("Enter second number: \n");
    scanf("%f", &b);
    printf("Enter Option No.: \n1.Addition \n2.Subtraction \n3.Multiplication \n4.Division \n");
    scanf("%d", &option);

    switch(option){
    case 1:
        printf("%f + %f = %f \n", a, b, add(a, b));
        break;
    case 2:
        printf("%f - %f = %f \n", a, b, sub(a, b));
        break;
    case 3:
        printf("%f * %f = %f \n", a, b, mul(a, b));
        break;
    case 4:
        printf("%f / %f = %f \n", a, b, div(a, b));
        break;
    default:
        printf("Invalid Option!\n");
        break;
    }
    return 0;
}