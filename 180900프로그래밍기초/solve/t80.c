#include <stdio.h>

int compare();
int main()
{
	int i,j,n,m,k=0,temp,last,k_1,k_2;
	scanf("%d %d",&n,&m);
	
	int num[n];
	
	for(i=0;i<n;i++)
		scanf("%d",&num[i]);
	
	qsort(num,n,sizeof(int),compare);
	
	double sum1=0,sum2;
	
	for(i=m;i<n-m;i++)
	{
		sum1+=num[i];
		k++;
	}
	if(n%2==0)
	{
		if(m==0)
		sum2=sum1;
		else
		{
			k_1=num[m];
			k_2=num[n-m-1];
			sum2 = k_1*(m+1)+k_2*(m+1);
			for(i=m+1;i<n-m-1;i++)
			sum2+=num[i];
		}
	}
	else
	{
		if(m==0)
		sum2=sum1;
		else
		{
			
				k_1=num[m];
				k_2=num[n-m-1];
				sum2 = k_1*(m+1)+k_2*(m+1);
				for(i=m+1;i<n-m-1;i++)
				sum2+=num[i];
			
		}
	}
	
	printf("%.1lf %.1lf",sum1/k,sum2/n);
}
int compare(const void *a, const void *b)   
{
    int num1 = *(int *)a;    
    int num2 = *(int *)b;    

    if (num1 < num2)    
        return -1;      
    
    if (num1 > num2)    
	 	return 1;       
    
    return 0;    
}
