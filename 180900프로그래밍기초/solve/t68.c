#include <stdio.h>
#include <math.h>

int f(int);
int main()
{
	int n,count=0;
	
	scanf("%d",&n);
	
	while(1)
	{
		n = f(n);
		if(n==1)
		{
			printf("HAPPY");
			return 0;
		}
		if(count>=8)
		{
			printf("UNHAPPY");
			return 0;
		}
		count++;
	}	
}
int f(int n)
{
	int sum=0;
	
	while(n>0)
	{
		sum+=pow(n%10,2);
		n/=10;
	}
	
	return sum;
}
