#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	
	if (n % 2) //��ȣ �ȿ� ���� 1(Ȧ��)�̸� 0�� �ƴϹǷ� ����, �������� Ȱ���ϴ� ��ũ��~?, c������ �۵� 
	{
		printf("n�� Ȧ��\n");
	}
	else
	{
		printf("n�� ¦��\n");
	}
}
