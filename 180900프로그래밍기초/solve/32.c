#include <stdio.h>
int main () {
	int a, b, i,result;
	result=0;
	while (1) {
		
		scanf("%d %d", &a, &b);
		if (a==b) break;
		if (a>b) break;
		for (i=0;i<=(b-a);i++) {
			result+=(a+i)*(a+i);
			}
		printf("%d\n", result);
		result=0;
	}
	
}
