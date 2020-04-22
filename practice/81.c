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
	int n, i, k1, k2, k3;
	scanf("%d %d %d %d", &n, &k1, &k2, &k3);
	int arr[n];
	for (i=0;i<n;i++) {
		scanf("%d", &arr[i]);
	}
	qsort(arr,n,sizeof(int),compare);
	k1=arr[0];
	k2=arr[1];
	k3=arr[2];
	printf("%d", k1+k2+k3);
}
