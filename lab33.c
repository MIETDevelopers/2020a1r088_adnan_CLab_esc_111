#include <stdio.h>
#include <stdlib.h>
struct s
{

    char name[50];
    int RollNo;
    int Marks;
};
int main()
{
    struct s a[10], b[10];
    FILE *fptr;
    int i;
    fptr = fopen("./txt.txt", "wb");
    for (i = 0; i < 1; ++i)
    {
        fflush(stdin);

        printf("Enter Name: ");
        gets(a[i].name);
        printf("Enter Roll Number: ");
        scanf("%d", &a[i].RollNo);
        printf("Enter Marks: ");
        scanf("%d", &a[i].Marks);
    }

    fwrite(a, sizeof(a), 1, fptr);
    fclose(fptr);
    fptr = fopen("./txt.txt", "rb");
    fread(b, sizeof(b), 1, fptr);
    printf("\n Entered details are:\n");
    for (i = 0; i < 1; ++i)
    {
        printf("	Name: %s\n	Roll Number: %d\n	Marks: %d", b[i].name, b[i].RollNo, b[i].Marks); //Printing the entered text.
    }
    fclose(fptr);
}
