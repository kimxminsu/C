#include <stdio.h>
int main() {
	int n, k, m1, m2, i, j, max1, max2;
	scanf("%d %d", &n, &k);
	int sum1[n], sum2[k], arr[n][k];
	for(i = 0; i < n; i++) {
		sum1[i] = 0;
		for(j = 0; j < k; j++) {
			scanf("%d", &arr[i][j]);
			sum1[i] += arr[i][j];
		}
	}
	for(i = 0; i < k; i++) {
		sum2[i] = 0;
		for(j = 0; j < n; j++)
		sum2[i] += arr[j][i];	
	}
	max1 = 0; max2 = 0;
	for(i = 0; i < n; i++) {
		if(sum1[i] >= max1) {
			max1 = sum1[i];
			m1 = i;
		}
	}
	for(i = 0; i < k; i++) {
		if(sum2[i] >= max2) {
			max2 = sum2[i];
			m2 = i;
		}
	}	
	printf("%d %d\n%d %d", m1 + 1, max1, m2 + 1, max2);
}
