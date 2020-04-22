#include <stdio.h>
int main () {
	char a[100];
	char b[100];
	scanf("%[^\'c']", a);
	scanf("%s", b);
	printf("%d", strlen(a));
	printf("%d", strlen(b));
	printf("%s", a);
}
