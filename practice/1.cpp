//
#include <stdio.h>
int main () {
	int i, n;

	i=1;
	while (1) {
		scanf("%d", &n);
		printf("%d\n", n);
		if (n<=0) break;
		i++;
	}
}
