#include <stdio.h>

int main()
{
	int n,m,i,j,x,y,k,max=-1;
	
	scanf("%d %d",&m,&n);
	long long int temp[m];
	int num[m][n];
	
	for(i=0;i<m;i++)
		scanf("%d",&temp[i]);
	for(i=0;i<m;i++)
	{
		j=0;
		while(temp[i]>0)
		{
				
			num[i][j]=temp[i]%10;
			temp[i]/=10;
			j++;
		}
		
	}
	for(i=0;i<m-2;i++)
	{
		for(j=0;j<n-2;j++)
		{
			int sum=0;k=0;
			for(x=i;x<i+3;x++)
			{
				for(y=j;y<j+3;y++)
				{
					sum+=num[x][y];
					k++;
					if(k==5)
					sum-=num[x][y];
				}
			}
			if(sum>max)
			max = sum;
		}
	}
	printf("%d",max);
}

