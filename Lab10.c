#include<stdio.h>
int main()
{
	int i, fact=1, number;
	printf("enter the number:\n");
	scanf("%d", &number);
	for(i=1; i<=number; i++)
	{
		fact=fact*i;
	}
	printf("the factorial is: %d", fact);
	return 0;
} 
