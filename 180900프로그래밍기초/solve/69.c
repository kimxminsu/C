#include <stdio.h>

int f(int num)
{
	
	int n10,nz=0;
	while(num>0)
	{
		n10=num%10;
		nz+=n10*n10;
		num/=10;
	}
	return nz;
}
int main(void)
{
	int n,i=0,r;
	scanf("%d",&n);
	r=f(n);
	while(1)
	{
		if(r==1)
		{
			printf("HAPPY");
			return 0;
		}
		else
		{
			r=f(r);
			i++;
			if(i==8)
			{
				printf("UNHAPPY");
				return 0; 
			}
			else if(r==1)
			{
				printf("HAPPY");
				break;
			}
		}
	}
}
