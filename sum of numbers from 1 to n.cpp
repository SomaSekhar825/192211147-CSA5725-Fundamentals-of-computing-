#include<stdio.h>
int main()
{
	int n,sum=0;
	printf("Enter a number for 'n': ");
	scanf("%d", &n);
	
	printf("The sum of ");
	
	for(int i=1;i<=n;i++)
	{
		printf("%d+", i);
	}
	
	for(int i=1;i<=n;i++)
	{
		sum+=i; 
	}
	printf(" = %d", sum);
	
	return 0;
}
