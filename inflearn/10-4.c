//��ġ�� ��ġ

#include <stdio.h>

int main()
{
	int a = 10;
	int b;
	
	printf("��ġ ���� ����\n")
	b = ++a; //a+1 �Ŀ� b�� ���� 
	printf("a : %d\n", a); //a=11
	printf("b : %d\n", b); //b=11
	
	printf("��ġ ���� ����\n")
	b = a++; //a�� b�� ���� �Ŀ� a+1 
	//a++; b = a; �̷��� ���°� ��õ�Ѵ� 
	printf("a : %d\n", a); //a=11
	printf("b : %d\n", b); //b=10
 } 
