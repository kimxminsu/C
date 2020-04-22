#include <stdio.h>

int main() {
	int k,h,w,n,i,j,hh,ww;
	scanf("%d %d %d", &h, &w, &n);


	k++;

	for (i=0;i<=w;i++) {
		if(n==0) break;
		ww++;
		printf("ww:%d\n", ww);
		hh=0;
		for (j=0;j<h;j++) {
			if(n==0) break;
			hh++;
			printf("hh:%d\n", hh);
			n--;
			printf("%d\n", n);
			
		}
	}
	if (ww<10) printf("%d0%d", hh, ww);
	if (ww>=10) printf("%d%d", hh, ww);
	
	/*if (hh<10) {
		printf("%d0%d", hh, ww);
	}
	printf("\n");
	if (hh>=10) {
		printf("%d%d", hh, ww);
	}*/
	
}
