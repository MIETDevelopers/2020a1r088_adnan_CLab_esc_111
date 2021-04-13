/ Write a program to accept 10 records with the structure and sort record on basis of name.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct emp {
	char name[25];
	int id;
	float salary;
};

int comparator(const void* p, const void* q)
{
	return strcmp(((struct emp*)p)->name,
				((struct emp*)q)->name);
}

int main()
{
	int i = 0, n = 10;
	struct emp arr[n];

	for (int i = 0; i < n; i++)
	{
		printf("Enter the Name of Employee %d\n", (i+1));
		scanf("%s",&arr[i].name);
		printf("Enter Id \n");
		scanf("%d",&arr[i].id);
		printf("Enter Salary \n");
		scanf("%f",&arr[i].salary);
	}

	printf("Unsorted List\n");
	for (i = 0; i < n; i++) {
		printf("Id = %d\t Name = %s\t Salary = %f \n",
			arr[i].id, arr[i].name, arr[i].salary);
	}
	qsort(arr, n, sizeof(struct emp), comparator);


	printf("Sorted by Name:\n");
	for (i = 0; i < n; i++) {
		printf("Id = %d\t Name = %s\t Salary = %f \n",
			arr[i].id, arr[i].name, arr[i].salary);
	}

	return 0;
}
