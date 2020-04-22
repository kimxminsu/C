#include <stdio.h>
int main () {
	double wonkum,eja,bokri;
	int i,n;
	scanf("%lf%lf%d", &wonkum,&eja,&n);
	bokri=wonkum;
	for (i=0;i<n;i++) {
		bokri+=eja*bokri;
	}
	printf("%.5lf\n", bokri);
}
