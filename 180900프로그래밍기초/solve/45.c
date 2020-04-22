#include <stdio.h>
int main () {
	double r, a, w, h, result;
	//double aa,bb,cc;
	scanf("%lf%lf%lf%lf", &r,&a,&w,&h);
	if (r==0) r=0.73;
	else r=0.6;
	//aa=a*5.14;
	//bb=r*w;
	//cc=0.015*h;
	//result=(aa/bb)-cc;
	result=((a*5.14)/(r*w))-0.015*h;
	if (result<0) printf("0.00000");
	else printf("%.5lf", result);
}
