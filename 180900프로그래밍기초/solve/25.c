#include <stdio.h>
int main () {
	int i,j,n;
	scanf("%d", &n);
	for (i=0;i<n;i++) {
		printf("%d", i);
		printf("$");
		for (j=0;j<i;j++) {
			printf("%d", j);
			printf("$");
		}
		printf("\n");
	}
}
