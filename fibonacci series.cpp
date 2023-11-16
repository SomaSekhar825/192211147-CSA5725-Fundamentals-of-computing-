#include<stdio.h>
int main()
{
	int first=0,second=1,next,n;
	printf("Enter a number for 'n' value: ");
	scanf("%d", &n);
	
	for(int i=1;i<=n;i++)
	{
		if(first<n)
		{
		printf("%d ", first);
		next=first+second;
		first=second;
		second=next;
	    }
	
	}
	return 0;
}
