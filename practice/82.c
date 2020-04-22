#include <stdio.h>
int main () {
	int n, i, j, distance, max=0;
	scanf("%d", &n); //입력 받을 점의 개수 
	int loc[n][2]; //점을 입력받을 배열 
	
	for (i=0;i<n;i++) {
		for (j=0;j<2;j++) {
			scanf("%d", &loc[i][j]); //모든 점들의 위치 입력 
		}
	}
	for (i=0;i<n;i++) {
		for (j=0;j<n;j++) {
			distance=(loc[i][0]-loc[j][0])+(loc[i][1]-loc[j][1]); //하나씩 비교 
			if (distance>max) {
				max=distance;
			}
		}
	} 
	printf("%d", max);
}
