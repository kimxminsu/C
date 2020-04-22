#include <stdio.h>
int main () {
	int n, k,nk;
	int i,ii,iii;
	long long result1=1,result2=1,result3=1,result;
	scanf("%d %d", &n, &k);
	nk=n-k;
	

	for (i=1;i<=n;i++) {
		result1*=i;
		//printf("%d\n", result1);
	}
	
	for (ii=1;ii<=k;ii++) {
		result2*=ii;
		//printf("%d\n", result2);
		
	}
	for (iii=1;iii<=nk;iii++) {
		result3*=iii;
		//result3*=iii;
		
	}
	
	//printf("%d\n", result1);
	//printf("%d\n", result2);
	//printf("%d\n", result3);
	
	
	result=result1/(result2*result3);
	printf("%d", result);
}
