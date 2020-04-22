#include <stdio.h>

int main() {
	int n,a;
	int i,j;
	int cnt=0;
	int arr[1000];
	scanf("%d", &n);
	for (i=0;i<n;i++) {
		scanf("%d", &a);
		arr[i]=a;
		}
	for (i=n-1;i>=0;i--) {
		if (arr[i]%3==0) {
			cnt++;
			printf("%d ", arr[i]);
		}
		//printf("%d", cnt);	
	}
	if (cnt==0) {
		printf("NO");
	}	
		
}
