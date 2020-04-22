#include <stdio.h>

unsigned long long int f(int n);
int main()
{
	int n;
	scanf("%d",&n);
	while(n>=0)
	{
		printf("#%d: %llu\n",n,f(n));
		scanf("%d",&n);
	}
}
unsigned long long int f(int n)
{
	unsigned long long int value[94];
	int i;
	if(n==0)
	return 0;
	else if(n==1 || n==2)
	return 1;
	else
	{
		value[0] =0;
		value[1] =1;
		value[2] =1;
		for(i=3;i<=93;i++)
		value[i]=value[i-1]+value[i-2];
	}
	return value[n];
}
