#include <stdio.h>
int main () {
	char bayeol[30];
	int length,i,j;
	scanf("%s",bayeol);
	length=strlen(bayeol);
	for (i=0;i<length;i++) {
		for (j=0;j<i;j++) printf("-");
		for (j=i;j<length;j++) printf("%c",bayeol[j]);
		for (j=length-2;j>=i;j--) printf("%c",bayeol[j]);
		for (j=0;j<i;j++) printf("-");
		printf("\n");
	}
}
