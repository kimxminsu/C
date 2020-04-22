/*
	1
	1 2 3
	1 2 3 4 5
	1 2 3 4 5 6 7
	n줄만큼 출 력 
*/

#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <=2*1-1; j++) {
			printf("%d", j);
	/*
	for (int i = 1; i <= 2*n-1; i+=2) {
		for (int j = 1; j <=i; j++) {
			printf("%d", j);
	*/
		}
		printf("\n");
	})
} 
