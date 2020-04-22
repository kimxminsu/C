#include <stdio.h>
#include <string.h>
int main () {
	char a[31], b[31];
	scanf("%s %s", a, b);
	printf("%s %s\n", a, b);
	printf("%*d %*d\n", strlen(a), strlen(a), strlen(b), strlen(b));
	printf("%s %s\n", a, b);
	printf("%-*d %-*d\n", strlen(a), strlen(a), strlen(b), strlen(b));
}
