//2^0=1; 2^1=2; 2^2=4; ... 2^6=64;

#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	
	/*
	int i=0; t=1;
	while(1 <= n) {
		printf("2^%d = %d\n", i, t);
		i++
		t *= 2;
	}
	*/
	
	/*
	int t = 1;
	for (int i = 0; i <= n; i++) { //for���ȿ� ���� 2�� ���� ���� 
		printf("2^%d = %d\n", i, t);
		t *= 2;
	}
	*/
	
	for (int i = 0; t = 1; i <= n; i++, t *= 2) { //for���ȿ� ���� 2�� ���� ���� 
		printf("2^%d = %d\n", i, t);
		t *= 2;
	}
}
