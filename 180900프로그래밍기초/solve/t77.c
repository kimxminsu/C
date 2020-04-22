#include <stdio.h>
#include <math.h>
int main()
{
	double a,b,c,x,x_p,x_m;
	while(scanf("%lf %lf %lf",&a,&b,&c)!=0)
	{
		if(b*b-4*a*c>0)
		{
			x_p=(-b+sqrt(b*b-4*a*c))/(2*a);
			x_m=(-b-sqrt(b*b-4*a*c))/(2*a);
			printf("%.3lf %.3lf\n",x_p,x_m);
		}
		else if(b*b-4*a*c==0)
		{
			x=-b/(2*a);
			printf("%.3lf\n",x);
		}
		else
		printf("Imaginary root\n");
	}
}
