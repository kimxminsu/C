#include <stdio.h>
int main () {
	int a=0,b=0,n=0,w=0;
	int i,x,y;
	int cnt,resultx,resulty;
	scanf("%d %d %d %d",a,b,n,w);
	for (i=0;i>=n;i++) {
		x=i;
		y=x-i;
		if (x==w-(y*b)/a) {
			cnt++;
			resultx=x;
			resulty=y;
		}
	}
	if (cnt==1) printf("%d %d", resultx, resulty);
	if (cnt>1||cnt==0) printf("-1");
}
