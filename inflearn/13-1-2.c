//13-1 �����ϰ� ���̱�! 

#include <stdio.h>

int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	
	if ( a > b ) //a>b>c; a>c>b; c>a>b
	{
		if ( a > c )
			printf("%d\n", a); //�ѹ��忡 ;�Ѱ���� {}�������� (�ǵ����̸� ������) 
		else //c>a
			printf("%d\n", c); //�ѹ��忡 ;�Ѱ���� {}�������� 
	}
	else if ( b > c ) //else + if = else if (��õ�� ����) 
			printf("%d\n", b); //�ѹ��忡 ;�Ѱ���� {}�������� 
		else //c>b
			printf("%d\n", c); //�ѹ��忡 ;�Ѱ���� {}�������� 
}

//+)�ٹٲ޵� �������� 
