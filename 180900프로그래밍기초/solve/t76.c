#include <stdio.h>

int main()
{
	int n,k,m1,m2,i,j,max_1,max_2;
	scanf("%d %d",&n,&k);
	int sum_1[n],sum_2[k],arr[n][k];
	for(i=0;i<n;i++)
	{
		sum_1[i]=0;
		for(j=0;j<k;j++)
		{
			scanf("%d",&arr[i][j]);
			sum_1[i]+=arr[i][j];
		}
	}
	for(i=0;i<k;i++)
	{
		sum_2[i]=0;
		for(j=0;j<n;j++)
		sum_2[i]+=arr[j][i];	
	}
	max_1=0;max_2=0;
	for(i=0;i<n;i++)
	{
		if(sum_1[i]>=max_1)
		{
			max_1 = sum_1[i];
			m1 = i;
		}
	}
	for(i=0;i<k;i++)
	{
		if(sum_2[i]>=max_2)
		{
			max_2 = sum_2[i];
			m2 = i;
		}
	}	
	printf("%d %d\n%d %d",m1+1,max_1,m2+1,max_2);
}
