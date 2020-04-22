#include <stdio.h>
int main () {
	double x=0.0,n=0.0,sum=0,x1=1;
	int i,j,sign=1;
	scanf("%lf %lf", &x,&n);
	for(i=1;i<=n;i++) {
		x1*=x;
		if (i%2!=0) sum+=x1/(double)i;
		else sum-=x1/(double)i;
	}
	printf("%.5f",sum);
}
