// program to check if a number is divisible by 2
#include <stdio.h>
int main()
{
	int num;
	printf("Please enter the number:\n");
	scanf("%d",&num);
	if (num>0)
	{
		if (num%2 == 0)
		{
			printf("%d is even\n", num);
		}
		else
		{
			printf("%d is odd\n", num);
		}
	}
	
	printf("ending the program...\n");
	return 0;
}
