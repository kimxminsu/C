//자연수 입력:12
//약수 출력(1,2,3,4,6,12)

#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	
	for (int i = 1; i <= n/2; i++) {
		if (n % i == 0) {
			printf("%d, ", i);
		}
	}
	
	printf("%d\n", n); //끝에 쉼표 없애고 마지막에 줄바꿈까지 완벽하게^0^ 
}
