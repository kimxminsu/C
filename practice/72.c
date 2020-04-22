#include <stdio.h>
int fibo (int a) {
	long long num1 = 0, num2 = 1, plus, i;
	for (i=1; i<a; i++) {
		plus = num1 + num2;
		num1 = num2;
		num2 = plus;
	}
	return plus;
}
int main () {
	long long n;
	while (1) {
		scanf("%lld", &n);
		if (n < 0) break;
		printf("#%lld: %lld\n", n, fibo(n));
	}
} 
