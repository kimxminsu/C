#include <stdio.h>

int main() {
	int a[5]; #����
	
	for (int i = 0; i <= 4; i++) { #�迭 
		a[i] = i * 5;
	}
	
	for (int i = 0; i <= 4; i++) {
		printf("%d\n", a[i]);
	}
