#include <stdio.h>
int main() {
	int n, m, nn, mm, s, i;
	scanf("%d %d", &n, &m);
	nn=n-m;
	mm=n+m;
	for (i=nn; i<=mm; i++){
		s=s+i;
		printf("%d\n", s);
		}
	
	
	return 0;
}
