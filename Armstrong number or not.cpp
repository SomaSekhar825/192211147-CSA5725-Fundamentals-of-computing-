#include<stdio.h>
#include<math.h>
int main()
{
	int num,originalnum,rem,sum=0,count=0;
	printf("Enter a number:");
	scanf("%d", &num);
	
	originalnum=num;
	
	while(originalnum!=0)
	{
		originalnum/=10;
		count++;
	}
	
	originalnum=num;
	
	while(originalnum!=0)
	{
		rem=originalnum%10;
		sum+=pow(rem,count);
		originalnum/=10;
    }

	if(sum==num)
	{
		printf("%d is a armstrong number", num);
	}
	else#include<stdio.h>
#include<math.h>
int main()
{
	int num,originalnum,rem,sum=0,count=0;
	printf("Enter a number:");
	scanf("%d", &num);
	
	originalnum=num;
	
	while(originalnum!=0)
	{
		originalnum/=10;
		count++;
	}
	
	originalnum=num;
	
	while(originalnum!=0)
	{
		rem=originalnum%10;
		sum+=pow(rem,count);
		originalnum/=10;
    }

	if(sum==num)
	{
		printf("%d is a armstrong number", num);
	}
	else
	{
		printf("%d is not a armstrong number", num);
	}
	

return 0;
}
	{
		printf("%d is not a armstrong number", num);
	}
	

return 0;
}
