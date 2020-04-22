#include <stdio.h>
int main () {
	int n, i, j, gop1=1, gop2=1, result;
	scanf("%d", &n);
	int arr[n][n];
	for (i=0;i<n;i++) {
		for (j=0;j<n;j++) {
			scanf("%d", &arr[i][j]); //모든 점들의 위치 입력 
		}
	}
	for (i=0;i<n;i++) {
		gop1*=arr[i][i];
	}
	for (i=n;i>0;i--) {
		gop2*=arr[i][i];
	}
	result=gop1-gop2;
	printf("%d", result);
}
