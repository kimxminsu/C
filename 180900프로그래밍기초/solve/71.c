#include <stdio.h>
void change(int a, int b) {
	int n,cnt=0,i;
	int bayeol[32];
	while (1) {
		if (a == 0) break;
		n = a % b;
		a = a / b;
		cnt++;
		bayeol[cnt] = n;
	}
	for (i = cnt; i > 0; i--) {
		printf("%d",bayeol[i]);
	}
} 
int main() {
	int n10,what,result;
	scanf("%d %d", &n10, &what);
	change(n10,what);
}
