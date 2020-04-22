#include <stdio.h>
#include <string.h>

int main() {
	char text[21];
	int i,j,k,le;
	scanf("%s", text);
	le=strlen(text);
	for (i=0;i<le;i++) {
		printf("*");
		for (j=0;j<=i;j++) {
			printf("%c", text[j]);
		}
		for (k=(le-j);k>0;k--) {
			printf(" ");
		}
		printf("*\n");
	}
}
	

