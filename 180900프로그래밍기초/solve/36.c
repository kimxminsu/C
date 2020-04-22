#include <stdio.h>
int main () {
	double x,r,y,mon,xx;
	int i;
	scanf("%lf %lf %lf", &x, &r, &y);
	mon=0;
	xx=x;
	for (i=0;x>0;i++) {
		mon=x-y;
		x=mon+(x*(r/100));
	
		//printf("%lf\n", x);
		if (x>=xx) break;
	}
	
	if (i==0) printf("NO");
	else printf("%d", i);
}
