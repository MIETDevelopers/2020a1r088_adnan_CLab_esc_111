// Program to demonstrate the use of various string operations.

#include<stdio.h>
#include<string.h>
int main(){
    char name[30], lastname[20], tempstr[10];
    int length;

    printf("Enter your Name: \n");
    //gets() is able to read blanks also as input.
    gets(name);
    printf("Name: %s\n", name);

    // strcpy() is used to copy source string into destination string.
    strcpy(tempstr, name);
    printf("%s is original String and %s is Copied String. \n", name, tempstr);
    
    printf("Enter Your Last Name: \n");
    scanf(" %s", lastname);
    // strcat() used to concatenate one string (source) at the end of another string (destination).
    strcat(name, lastname);
    printf("Full Name: %s\n", name);

    // strlen() is used to compute the length of the string.
    length = strlen(name);
    printf("Length of Full Name is %d\n", length);
    return 0;
}
