#include <stdio.h>

int main() {
	//1, 2, 4, 8, 16, 32, ...
	
	int n;
	scanf("%d", &n);
	
	for (int i = 1; i <= n; i *= 2) { //i가 ()나 {}안에 정의되어 있으면 밖으로 나오면 정의되지 않음. 
		printf("%d\n", i);
	} 
} 
