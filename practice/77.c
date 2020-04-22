#include <stdio.h>
#include <math.h>
int main () {
	double a, b, c, equation;
	equation = b*b - (4*a*c);
	while(scanf("%lf %lf %lf",&a,&b,&c)!=0) {
		if (equation > 0) { //실근(2근) 
			printf("%lf", )
		}
		else if (equation = 0) { //실근(중근) 
			printf("")
		}
		else { //equation < 0 : 허근 
			printf("Imaginary root");
		}
	}
}
