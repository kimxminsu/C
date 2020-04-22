#include <stdio.h>
#include <math.h>

int main()
{
	long long int max;
	double distance;
	int n,i,j,sum,k_m,k_M;
	
	scanf("%d",&n);
	
	int x[n],y[n],sum_M[n],sum_m[n];
	
	for(i=0;i<n;i++)
		scanf("%d %d",&x[i],&y[i]);
		
	max=-1;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			distance = sqrt(pow(x[i]-x[j],2)+pow(y[i]-y[j],2));
			if(distance>max)
			{
				max = distance;
				sum_M[i]=abs(x[i]-x[j]);
				sum_m[j]=abs(y[i]-y[j]);
				k_M=i;
				k_m=j;
			}
		}
	}
	sum = sum_M[k_M]+sum_m[k_m];
	printf("%d",sum);
}
