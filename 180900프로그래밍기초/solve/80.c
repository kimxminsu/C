#include <stdio.h>
#include <stdlib.h>

int compare(const void *a,const void *b)
{
	int num1=*(int*)a;
	int num2=*(int*)b;
	if(num1<num2)
	return -1;
	if(num1>num2)
	return 1;
	return 0;
}
int main () {
	int n, k, i;
	double julsa=0, bojung=0;
	scanf("%d %d", &n, &k);
	int arr[n];
	for (i=0; i<n; i++) {
		scanf("%d", &arr[i]);
	}
	qsort(arr,n,sizeof(int),compare);
	for (i=k; i<n-k; i++) {
		julsa+=arr[i];
		//printf("arr:%d	sum:%lf\n", arr[i], julsa);
	}
	for (i=0; i<=k; i++) {
		arr[i]=arr[k]; //0-2 1-2 2-2
		arr[n-i-1]=arr[n-k-1]; //6-4 5-4
	}
	for (i=0; i<n; i++) {
		bojung+=arr[i];
		//printf("arr:%d	sum:%lf\n", arr[i], bojung);
	}
	printf("%.1lf %.1lf", julsa/(n-2*k), bojung/n);
}
