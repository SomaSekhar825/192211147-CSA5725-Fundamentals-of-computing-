#include<stdio.h>
int main()
{
	int n,sum;
	printf("Enter a number for 'n': ");
	scanf("%d", &n);
	
	sum= n*(n+1);
	
	printf("Sum of first %d even numbers = %d",n,sum);
	
	return 0;
}
