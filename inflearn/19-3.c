//일의 자릿수가 3 6 9 인 경우 *출력
//1 2 * 4 5 * 7 8 * 10 11 12 * 

#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	
	for(int i = 1; i <= n; i++) {
		int k = i % 10; //10으로 나눈 나머지=1의 자리수 
		if (k==3 || k == 6 || k == 9) {
			printf("* ");
		}
		else {
			printf("%d", i);
		}
	}
	printf("\n");
} 
