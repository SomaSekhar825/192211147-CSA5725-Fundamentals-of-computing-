#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number for 'n' value: ");
	scanf("%d", &n);
	printf("The even series from 2 to n is:\n");
	
	for(int i=2;i<=n;i++)
	{
		if(i%2==0)
		{
		printf("%d, ", i);
	    }
	}
	return 0;
}
