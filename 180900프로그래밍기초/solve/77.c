#include <stdio.h>
#include <math.h>
int main () {
	double a, b, c, equation;
	while(scanf("%lf %lf %lf",&a,&b,&c)!=0) {
		equation = b*b - (4*a*c);
		if (equation > 0) { //실근(2근) 
			printf("%.3lf %.3lf\n", (-b+sqrt(equation))/(2.*a)
			, (-b-sqrt(equation))/(2.*a));
		}
		else if (equation == 0) { //실근(중근) 
			printf("%.3lf\n", -b/(2.*a));
		}
		else if (equation < 0){ //equation < 0 : 허근 
			printf("Imaginary root\n");
		}
		else {
			printf("ERROR\n");
		}
	}
}
