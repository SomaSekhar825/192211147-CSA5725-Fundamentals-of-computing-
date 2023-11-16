#include<stdio.h>
#include<math.h>
int main()
{
	int n,sum=0;
	printf("Enter a upperlimit: ");
	scanf("%d", &n);
	
	for(int i=1;i<=n;i++)
	{
		sum+=pow(i,3);
	}
	printf("Sum of cubes of numbers from 1 to %d = %d", n, sum);
	
	return 0;
}
