#include <stdio.h>
int main () {
	int a, b, n, w, i, resultx, resulty, cnt = 0;
	scanf("%d %d %d %d", &a, &b, &n, &w);
	for (i=1; i<n; i++) {
		int res = a * i + b * (n-i);
		if (w == res) {
			cnt++;
			resultx = i;
			resulty = n - i;
		}
	}
	if (cnt==1) printf("%d %d", resultx, resulty);
	else printf("-1");
}
