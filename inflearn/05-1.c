/*
part1. ������ ����, ������ �ڷ���
part2. ������, C/C++�� �ڷ��� ������
*/ 
#include <stdio.h>

int main()
{
	int a = 5;
	int b = 3;
	//int:32��Ʈ(4����Ʈ), ������ ��� �� ���� ��)5 
	//float:32��Ʈ(4����Ʈ), �Ǽ��� ��� �� ���� ��)5.000000, 3.140000 ->�ε��Ҽ���(floating point) 
	//double:64��Ʈ(8����Ʈ), �Ǽ��� ��� �� ���� ��)5.000000, 3.140000
	
	int hap = a + b;
	int cha = a - b;
	int gop = a * b;
	int mok = a / b;
	int namu = a % b ;
	
	printf("%d + %d = %d\n", a, b, hap);
	printf("%d - %d = %d\n", a, b, cha);
	printf("%d * %d = %d\n", a, b, gop);
	printf("%d / %d = %d\n", a, b, mok); //������ƴ� ������ 
	printf("%d %% %d = %d\n", a, b, namu); //%�ϳ������� ������
	 
}
