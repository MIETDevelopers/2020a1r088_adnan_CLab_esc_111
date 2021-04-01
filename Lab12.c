#include<stdio.h>
int main()
{
	int i, num, n, large=0;
	printf("enter how many numbers: \n");
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		printf("enter number:%d ", i+1);
		scanf("%d", &num);
		if(num>large)
		large=num;
	}
	printf("\n the largest number is: %d", large);
	return 0;
} 
