#include <stdio.h>
int main () {
	double julda,subsi,whasi,subsi1;
	scanf("%lf", &julda);
	subsi=julda-273.16;
	whasi=9.0*subsi/5.0+32.0;
	printf("%.2lf %.2lf", whasi,subsi);
}
