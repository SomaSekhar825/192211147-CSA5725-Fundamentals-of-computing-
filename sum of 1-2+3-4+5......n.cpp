#include<stdio.h>
int main()
{
	int n,sum=0;
	printf("Enter a number for 'n' value: ");
	scanf("%d", &n);
	
	printf("sum of ");
	
	for(int i=1;i<=n;i++)
	{
		if(i%2!=0)
		{
			printf("+%d", i);
		}
		else
		{
			printf("-%d", i);
		}
	}
	for(int i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			sum-=i;
		}
		else
		{
			sum+=i;
		}
	}
	printf(" = %d", sum);
	
	return 0;
}
