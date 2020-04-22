#include <stdio.h>

int main()
{
	int a = 5;
	int b = 3;
	//int:32비트(4바이트), 정수를 담는 데 쓰임
	
	int hap = a + b;
	int cha = a - b;
	int gop = a * b;
	int mok = a / b;
	int namu = a % b ;
	
	printf("%d + %d = %d\n", a, b, hap);
	printf("%d - %d = %d\n", a, b, cha);
	printf("%d * %d = %d\n", a, b, gop);
	printf("%d / %d = %d\n", a, b, mok); //나누기아님 몫계산임 
	printf("%d %% %d = %d\n", a, b, namu); //%하나만쓰면 오류남
	 
}
