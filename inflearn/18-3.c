//��ø for��

#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) { //i�� ���� ����� �����̹Ƿ� J ��! 
			printf("*");
			//Q.L10�� j���� i������ �ٲ㼭 ����ϸ�? A.��������� �����
			//()�ۿ��� i �ᵵ�Ǵ�����:{}������ ������ �ƴϱ⶧�� 
		}
		printf("\n")
	}
} 
