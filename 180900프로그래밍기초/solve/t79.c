#include <stdio.h>

int main()
{
	int n,i;
	
	scanf("%d",&n);
	
	int data[n];
	for(i=0;i<n;i++)
		scanf("%d",&data[i]);
	int count[10001];

	int mode=0;int max=0;
	
	for(i=0;i<=10000;i++)
		count[i]=0;
	for(i=0;i<n;i++)
		count[data[i]]++;
	for(i=0;i<=10000;i++)
	{
		if(max<=count[i])
		{
			max=count[i];
			mode =i;
		}
	}
	printf("%d %d\n",mode,max);
}
