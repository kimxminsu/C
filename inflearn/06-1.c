#include <stdio.h>

int main()
{
	printf("%d %d %d %d\n", sizeof(long), sizeof(char), sizeof(float), sizeof(double));
	
	int a; char b; float c; //���ٿ� ��������(����=;) ����
	double
		d; //�����ٿ� �ѹ��� ����
	printf("%d %d %d %d\n", sizeof(a), sizeof(b), sizeof(c), sizeof(d));
}
//sizeof(x):x�� ũ��
//x:��(int, float...)/�����̸�(a,b,c)
