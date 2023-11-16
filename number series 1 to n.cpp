#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number for 'n' value:");
	scanf("%d", &n);
	
	if( n<1)
	{
		printf("Please enter a positive number");
		return 1;
	}
	for(int i=1;i<=n;i++)
	{
		printf("%d, ", i);
	}

	
	return 0;
}
