#include <stdio.h>
unsigned long long fibo(int n) {
	unsigned long long f[94];
	f[0]=0;
	f[1]=1;
	int i;
	for (i=2;i<=n;i++) {
		f[i]=f[i-2]+f[i-1];
	}
	return f[n];
}
int main () {
	int n;
	while (1) {
		scanf("%d", &n);
		if (n<0) break;
		printf("#%d: %llu\n", n, fibo(n));
	}
}
