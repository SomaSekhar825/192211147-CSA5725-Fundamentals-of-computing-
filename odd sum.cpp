#include<stdio.h>
#include <math.h>
int main()
{
	int n,sum;
	printf("Enter a number for 'n': ");
	scanf("%d", &n);
	
	sum= pow(n,2);
	
	printf("Sum of first %d odd numbers = %d",n,sum);
	
	return 0;
}
