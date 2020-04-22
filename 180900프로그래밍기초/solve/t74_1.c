#include <stdio.h>

int main()
{
	int n,i;
	scanf("%d",&n);
	int num[n];
	
	for(i=0;i<n;i++)
	scanf("%d",&num[i]);
	int min[2];
	min[0]=num[0];
	for(i=1;i<n;i++)		
	{
		if(num[i]<=min[0])
		{
			min[1]=min[0];
			min[0]=num[i];
			continue;
		}
		if(i==1)
		min[1]=num[i];
		if(num[i]<=min[1])
		min[1]=num[i];	
	}
	printf("%d",min[1]);
}

