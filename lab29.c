#include <stdio.h>
#include <string.h>
#define MAX 5

struct student
{

	char rollno[11];
	char name[100];
	char branch[3];
	float class12Percentage;
	float class10Percentage;
};

int main()
{
	struct student studentsOfCSEA1[MAX];

	int i;

	for (i = 0; i < MAX; ++i)
	{
	
		printf("student number %d\n", (i+1));
		printf("Roll no = ");
		scanf(" %s", studentsOfCSEA1[i].rollno);
		printf("\n");
		printf("Name = ");
		scanf(" %s", studentsOfCSEA1[i].name);
		printf("\n");
		printf("12 percentage = ");
		scanf(" %f", &studentsOfCSEA1[i].class12Percentage);
		printf("\n");
	}
	
	for (i = 0; i < MAX; ++i)
	{
		printf("student number %d\n", (i+1));
		printf("Roll no = %s \n", studentsOfCSEA1[i].rollno);
		printf("Name = %s \n", studentsOfCSEA1[i].name);
		printf("class 12 percentage = %f \n", studentsOfCSEA1[i].class12Percentage	);
		printf("\n");
 }
	return 0;
} 
