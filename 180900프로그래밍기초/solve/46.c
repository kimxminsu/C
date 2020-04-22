#include <stdio.h>
int main () {
	double R1,R2,R3,R4,R5;
	double a,b,c;
	scanf("%lf %lf %lf %lf %lf", &R1, &R2, &R3, &R4, &R5);
	a=1/(R2+R3);
	b=1/(a+(1/R4));
	c=R1+b+R5;
	printf("%.5lf", c);
}
