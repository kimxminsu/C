#include <stdio.h>
int main () {
	int u,i,j,n,ii,jj;
	scanf("%d", &n);
	for (i=0;i<n;i++) {
		ii=65-1+n;
		printf("%c", ii);
		for (j=0;j<i;j++) {
			jj=ii-1-j;
			printf("%c", jj);
		}
		printf("\n");
	}
	
}

//65=A, 66=B, 67=C, 68=D, 69=E, 70=F
