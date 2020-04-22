#include <stdio.h>

int main() {
	int a[5]; #선언
	
	for (int i = 0; i <= 4; i++) { #배열 
		a[i] = i * 5;
	}
	
	for (int i = 0; i <= 4; i++) {
		printf("%d\n", a[i]);
	}
