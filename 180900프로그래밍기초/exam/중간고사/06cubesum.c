#include <stdio.h>
int main () {
	long long int n,d=0,sum;
	while(scanf("%lld\n", &n)==1) {
		sum=0;
		while(n>0) {
			d=n%10;
			n=n/10;
			sum+=d*d*d;
		}
		printf("%lld\n",sum);	
	}

}
