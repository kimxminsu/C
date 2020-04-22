#include <stdio.h>
#include <string.h>
int main () {
	char bayeol[1000];
	int r=0,g=0,b=0,i;
	int length=0;
	scanf("%s",bayeol);
	length=strlen(bayeol);
	//printf("%d");
	for(i=0;i<length;i++) {
		if (bayeol[i]=='R') {
			r++;
		}
		if (bayeol[i]=='G') {
			g++;
		}
		if (bayeol[i]=='B') {
			b++;
		}
	}
	printf("%d %d %d",r,g,b);
}
