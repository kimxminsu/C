/*
	n=4
	1
	1 3
	1 3 5
	1 3 5 7
	n=�ټ�
	2k-1 : Ȧ �� 
*/

#include <stdio.h>

int main() {
	int n;
	scanf("%d",&n);
	
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			printf("%d", 2*j-1);
		}
		pritnf("\n");
		
		/*
		for (int j = 1; j <= 2*i-1; j+=2) {
			printf("%d", j);
		}
		*/
	}
} 
