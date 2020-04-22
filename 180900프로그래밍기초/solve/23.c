#include <stdio.h>

int main() {
	int h,w,n,hh,ww;
	scanf("%d %d %d", &h, &w, &n);
	hh=(n-1)%h+1;
	ww=(n-1)/h+1;
	
	printf("%d%02d", hh, ww);
}
