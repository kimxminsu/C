//�� ������

#include <stdio.h>
int main ()
{
	int a, b;
	scanf("%d %d", &a, &b);
	
	int p = a > b; //����:0 ��:1 
	int q = a < b;
	int r = a ==b; //==:����
	
	//bool:������ ����� ���� (1����Ʈ) 
	bool p = a > b; //����:0 ��:1 
	bool q = a < b;
	bool r = a ==b; //==:����
	
	printf("%d\n", p);
	printf("%d\n", q);
	printf("%d\n", r);	 
 } 
