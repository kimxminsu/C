#include <stdio.h>

int main() {
	long long n,i,sum;
	scanf("%lld", &n);
	sum=0;
	for(i=1;i<=n;i++)
		{
		sum=sum+(1000*i);}
	printf("%lld\n", sum);
}
