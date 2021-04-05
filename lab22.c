// Program to check whether a given string is a Palindrome.
#include<stdio.h>
#include<string.h>
int main(){
    char a[50], b[50];

    printf("Enter a String: \n");
    gets(a);

    strcpy(b, a);   //strcpy() is used to copy string.
    strrev(b);      //strrev() is used to reverse a string.

    if (strcmp(a, b) == 0)  // strcmp() is used  to compare strings.
    {
        printf("The String is Palindrome. \n");
    }
    else{
        printf("The string is not a Palindrome. \n");
    }
    return 0;
}
