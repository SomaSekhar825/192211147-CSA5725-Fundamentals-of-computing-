#include<stdio.h>
#include<math.h>
int main()
{
	int n,sum=0;
	printf("Enter a number for 'n' value: ");
	scanf("%d", &n);
	
	for(int i=1;i<=n;i++)
	{
		if(i%2!=0)
		{
			sum+=pow(i,2);
		}
	}
	printf("Sum of squares of odd numbers from 1 to %d = %d", n,sum);
	
	return 0;
}
