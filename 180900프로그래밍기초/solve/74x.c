#include <stdio.h>
int big (int* arr,int cnt) {
	int i,bigger,bigger2=0;
	bigger=arr[0];
	for (i=1;i<cnt;i++) {
		if (bigger<arr[i]) {
			bigger2=bigger;
			bigger=arr[i];
		}
	}
	return bigger2;
}
int main () {
	int arr[100000],result,cnt,n;
	scanf("%d", &n);
	for (cnt=0;cnt<n;cnt++) {
		scanf("%d", &arr[cnt++])!=EOF;
	}
	result=big(arr,cnt);
	printf("%d", result);
}
