#include <stdio.h>

int main()
{
	int a = 2; //�ʱ�ȭ(����� ���ÿ� ����) 
	int b = 3;
	
	printf("%d + %d = %d\n", a, b, a + b);
	
	int abc; //O
	int 2a; //X
	int a2; //O
	int AAAA; //O
	//�����̸�:���ĺ� ��ҹ���,_,����(�Ǿտ����°������) 
	
	int hap = a + b;
	
	printf("%d + %d = %d\n", a, b, hap);
}
