/*
part1. 변수의 연산, 변수의 자료형
part2. 이진법, C/C++의 자료형 총정리
*/ 
#include <stdio.h>

int main()
{
	int a = 5;
	int b = 3;
	//int:32비트(4바이트), 정수를 담는 데 쓰임 예)5 
	//float:32비트(4바이트), 실수를 담는 데 쓰임 예)5.000000, 3.140000 ->부동소수점(floating point) 
	//double:64비트(8바이트), 실수를 담는 데 쓰임 예)5.000000, 3.140000
	
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
