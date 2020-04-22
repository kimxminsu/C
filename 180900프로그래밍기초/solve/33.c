#include <stdio.h>
int main () {
	int n,i;
	scanf("%d", &n);
	int bayeol[n];
	for (i=0;i<n;i++) {
		scanf("%d", &bayeol[i]);
	}
	for (i=n-1;i>=0;i--) {
		printf("%d ", bayeol[i]);
	}
}
