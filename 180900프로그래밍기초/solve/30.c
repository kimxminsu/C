#include <stdio.h>
#include <string.h>

int main () {
	char a[101];
	int n,i;
	scanf("%s", a);
	n=strlen(a);
	for (i=0;i<n;i++) {
		printf("%c", a[n-1-i]);
	}
	/*printf("\n");
	
	for (i=n-1;i>=0;i--) {
		printf("%c", a[i]);
	}*/
}
