#include <stdio.h>
int main () {
	int n, m;
	scanf("%d %d", &n, &m);
	int arr[n+1][m+1];
	for (i=0;i<n;i++) {
		for (j=0;j<m;j++) {
			scanf("%d", &arr[i][j]);
			arr[i][m+1]+=arr[i][j];
		}
	}
	for (i=0;i<m;i++) {
		for (j=0;j<m;j++) {
			scanf("%d", &arr[i][j]);
			arr[i][m+1]+=arr[i][j];
		}
	}
	
}
