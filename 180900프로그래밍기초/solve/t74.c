#include <stdio.h>

int main()
{
	int s,n,i,min_1,min_2;
	scanf("%d",&n);
	int k[n];
	for(i=0;i<n;i++)
	scanf("%d",&k[i]);
	min_1 = 1000000;
	for(i=0;i<n;i++)
	{
		if(k[i]<=min_1)
		{
			min_1=k[i];
			s=i;
		}
	}
	min_2 = 1000000;
	for(i=0;i<n;i++)
	{
		if(s==i)
		continue;
		else
		if(k[i]<=min_2)
		min_2=k[i];
	}
	printf("%d",min_2);
}
