#include <stdio.h>
int main () {
	int n, i, j, distance, max=0;
	scanf("%d", &n); //�Է� ���� ���� ���� 
	int loc[n][2]; //���� �Է¹��� �迭 
	
	for (i=0;i<n;i++) {
		for (j=0;j<2;j++) {
			scanf("%d", &loc[i][j]); //��� ������ ��ġ �Է� 
		}
	}
	for (i=0;i<n;i++) {
		for (j=0;j<n;j++) {
			distance=(loc[i][0]-loc[j][0])+(loc[i][1]-loc[j][1]); //�ϳ��� �� 
			if (distance>max) {
				max=distance;
			}
		}
	} 
	printf("%d", max);
}
