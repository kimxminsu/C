#include <stdio.h>

int max(int x[],int k);
int main()
{
	char ch;
	int k=0,n[100000];
	while(1)
	{
		scanf("%d",&n[k]);
		k++;
		if((ch=getchar())==EOF)
		break;
	}
	printf("%d",max(n,k));
}
int max(int x[],int k)
{
	int i,max=-1000000;
	for(i=0;i<k;i++)
	{
		if(x[i]>=max)
		max = x[i];
	}
	return max;
}
