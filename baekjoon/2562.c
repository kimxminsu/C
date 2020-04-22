#include <stdio.h>
int main () {
	int i,n,m,num;
	m=0;
	num=0;
	for (i=0;i<9;i++) {
		scanf("%d", &n);
		if (m<n) {
			m=n;
			num=i;
		}
	}
	printf("%d\n", m);
	printf("%d\n", num+1);
} 
