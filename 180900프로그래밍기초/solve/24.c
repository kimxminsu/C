#include <stdio.h>
int main () {
	char a[13]="ABCDEFGHIJKL";
	char b[11]="0123456789";
	
	int i,n;
	scanf("%d", &n);
	printf("%c", a[(n-4)%12]);
	printf("%c\n", b[(n-4)%10]);
	
}
