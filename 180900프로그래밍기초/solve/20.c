#include <stdio.h>

int main() {
	int n,i,pay,sum,num;
	scanf("%d", &n);
	sum=0;
	pay=1000*n;
	num=n+1;
	printf("%d\n", pay);
	for(i=1;i<=n;i++);
		sum=sum+pay;
		printf("%d", sum);
}
