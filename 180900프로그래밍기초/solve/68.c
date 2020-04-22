//68
#include <stdio.h>

void arr(double *num1,double *num2,double *num3)
{
	double temp;
	if(*num1>*num2)
	{
		temp=*num2;
		*num2=*num1;
		*num1=temp;
	}
	if(*num2>*num3)
	{
		temp=*num3;
		*num3=*num2;
		*num2=temp;
	}
	if(*num1>*num2)
	{
		temp=*num2;
		*num2=*num1;
		*num1=temp;
	}
}
int main(void)
{
	double n1,n2,n3;
	while(scanf("%lf %lf %lf",&n1,&n2,&n3)==3)
	{
		arr(&n1,&n2,&n3);
		printf("%lf %lf %lf\n",n1,n2,n3);
	}
}
