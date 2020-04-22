#include <stdio.h>
double har(double x,double y);
int main () {
	double x,y,z;
	while(scanf("%lf %lf",&x,&y)!=0)
	{
		z=har(x,y);
		printf("%.3lf\n",z);
	}
}
double har(double x1,double y1) {
	double z1;
	z1=2/(1/x1+1/y1);
	return z1;
}
