#include <stdio.h>
int main(void)
{
	int a;
	char c[10]="0123456789";
	char d[12]="ABCDEFGHIJKL";
	scanf("%d", &a);
	//printf("�Է¹�����%d\n",a);
	//printf("%d\n",2017%12);
	a+=56;
	//printf("+56�� �Ѱ�%d\n",a);
	a%=60;
	//printf("60�� ���� ��������%d\n",a);
	printf("%c%c",d[a%12],c[a%10]);
	return 0;
}
//�����ι�������̽�������
//0 1 2 3 4 5 6 7 8 9 10 11 
