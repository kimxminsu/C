#include <stdio.h>

int main()
{
	int i,j,a,b;
	long long int max_a,sum=0,sum2=0;
	scanf("%d %d",&b,&a);
	long long int arr[b][a],max_front[a],max_side[b];
	for(i=0;i<b;i++)
	{
		for(j=0;j<a;j++)
		{
			scanf("%lld",&arr[i][j]);
			sum+=arr[i][j];
		}
	}	
		for(i=0;i<a;i++)
		{
			max_a=0;
			for(j=0;j<b;j++)
			{
				if(max_a<=arr[j][i])
				{
					max_a=arr[j][i];
				}
			}
			max_front[i] = max_a;
		}
		for(i=0;i<b;i++)
		{
			max_a=0;
			for(j=0;j<a;j++)
			{
				if(max_a<=arr[i][j])
				{
					max_a=arr[i][j];
				}
			}
			max_side[i] = max_a;
			sum2+=max_side[i];
		}
		for(i=0;i<a;i++)
		{
			int s=0;
			for(j=0;j<b;j++)
			{
				if(max_front[i]==max_side[j])
				{
					s++;
					break;
				}
			}
			if(s==0)
			sum2+=max_front[i];
		}
	printf("%lld",sum-sum2);
}

