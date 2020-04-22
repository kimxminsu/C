#include <stdio.h>

void small(double *x,double *y,double *z);
int main()
{
	double a,b,c;
	while(scanf("%lf %lf %lf",&a,&b,&c)!=0)
	{
		small(&a,&b,&c);
		printf("%lf %lf %lf\n",a,b,c);
	}
}
void small(double *x,double *y,double *z)
{
	double n1,n2,n3,temp;
	n1 = *x;
	n2 = *y;
	n3 = *z;
	if(n1<=n2 && n2<=n3)
	;
	else if(n1<=n3 && n3<=n2)
	{
		temp=*y;
		*y=*z;
		*z=temp;
	}
	else if(n2<=n1 && n1<=n3)
	{
		temp=*x;
		*x=*y;
		*y=temp;
	}
	else if(n2<=n3 && n3<=n1)
	{
		temp=*x;
		*x=*y;
		*y=temp;
		temp=*y;
		*y=*z;
		*z=temp;
	}
	else if(n3<=n1 && n1<=n2)
	{
		temp=*x;
		*x=*z;
		*z=temp;
		temp=*y;
		*y=*z;
		*z=temp;
	}
	else
	{
		temp=*x;
		*x=*z;
		*z=temp;
	}
}
