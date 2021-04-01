#include<stdio.h>
int main()
{
	int i, n, t1=0, t2=1, b;
	printf("enter the number of terms:\n");
	scanf("%d", &n);
	printf("the fibonacci series is:\n");
	for(i=1; i<=n; i++)
	{
		printf("%d", t1);
		b=t1+t2;
		t1=t2;
		t2=b;
	}
	return 0;
} 
