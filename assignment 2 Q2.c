//  Write a C program to copy contents of one file into another.

#include<stdio.h>
int main(){
    FILE *fptr1, *fptr2;
    char ch;

    fptr1 = fopen("file1.txt", "r");
    if (fptr1==NULL)
    {
       printf("Unable to open a file.\n");
    } else{
        fptr2 = fopen("file2.txt", "w");
        if (fptr2 == NULL){
            printf("Unable to open a file.\n");
        }

        else{
            ch = fgetc(fptr1);
            while (ch != EOF){
                fprintf(fptr2, "%c", ch);
                ch = fgetc(fptr1);
            }
            printf("Done..\n");
            fclose(fptr2);
        }
        fclose(fptr1);
    }
    return 0;
}
