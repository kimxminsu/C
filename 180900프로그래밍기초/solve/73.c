#include <stdio.h>
int big (int* n,int cnt) {
	int i,bigger;
	bigger=n[0];
	for (i=1;i<cnt;i++) {
		if (bigger<n[i]) {
			bigger=n[i];
		}
	}
	return bigger;
}
int main () {
	int n[100000],result,cnt=0;
	while (scanf("%d", &n[cnt++])!=EOF) {
	}
	result=big(n,cnt);
	printf("%d", result);
}
