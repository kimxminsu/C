#include <stdio.h>

double harmonic_E(double,double);
int main()
{
	double n,m,print;
	while(scanf("%lf %lf",&n,&m)!=0)
	{		
		print = harmonic_E(n,m);
		printf("%.3lf\n",print);
	}
	
	return 0;
}
double harmonic_E(double x,double y)
{
	double value;
	
	value = 1/((1/x+1/y)/2);
	
	return value;
}
