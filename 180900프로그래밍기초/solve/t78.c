#include <stdio.h>
#include <stdlib.h>
int compare();
int main()
{
	int n,temp,i,j,k=0;
	
	scanf("%d",&n);
	int num[n];
	
	for(i=0;i<n;i++)
	scanf("%d",&num[i]);
	
	qsort(num,n,sizeof(int),compare);
	if(n%2==0)
	printf("%.1lf",(num[n/2-1]+num[n/2])/2.);
	else
	printf("%d",num[n/2]);
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
