#include <stdio.h>
int main () {
	int n,i,j,jj,k,l,ll;
	char nn;
	scanf("%c", &nn);
	n=nn-'A'+1;
	for (i=0;i<n;i++) {
		for (k=n-i-1;k>0;k--) {
			printf("-");
		}
		for (j=0;j<=i;j++) {
			jj=65+j;
			printf("%c", jj);
		}
		for (l=1;l<=i;l++) {
			ll=65+i-l;
			printf("%c", ll);
		}
		printf("\n");
	}
}
