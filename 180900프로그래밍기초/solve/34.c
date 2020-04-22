#include <stdio.h>
int main () {
	int n, i;
	double a,b,suma,sumb;
	scanf("%d", &n);
	suma=0;
	sumb=0;
	for (i=0,a=1.0;i<n;i++,a+=1.0) {
		suma=suma+(1.0/a);	
	}
	for (i=1;i<=n;i+=1) {
		if (i%2==0) b=-1;
		else b=1;
		sumb=sumb+(1.0/(i*b));	
		//printf("%lf\n", b);	
		//printf("%lf\n", i*b);
	}
	printf("%lf ", suma);
	printf("%lf\n", sumb);
}
