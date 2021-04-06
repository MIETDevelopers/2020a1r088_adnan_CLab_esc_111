//Program to store the information of student marks using structure and find total marks of individual student.

#include<stdio.h>
struct student
{
    char rollno[10];
    char name[50];
    float marks[4];
} stud;

int main()
{
    int i;
    float total = 0;

    printf("Enter the Name of Student: \n");
    gets(stud.name);
    printf("Enter Roll No.: \n");
    scanf(" %s", stud.rollno);
    
    for (i = 1; i <= 4; i++)
    {
        printf("Enter marks in Subject %d: \n", i);
        scanf(" %f", &stud.marks[i]);
        total = total + stud.marks[i];
    }

    printf("Student Name: %s\n", stud.name);
    printf("Student Roll No.: %s\n", stud.rollno);
    for (i = 1; i <= 4; i++)
    {
        printf("Marks in Subject %d = %f\n", i, stud.marks[i]);
    }
    printf("Total Marks = %f", total);
    return 0;
}
