//전치와 후치

#include <stdio.h>

int main()
{
	int a = 10;
	int b;
	
	printf("전치 증가 연산\n")
	b = ++a; //a+1 후에 b에 대입 
	printf("a : %d\n", a); //a=11
	printf("b : %d\n", b); //b=11
	
	printf("후치 증가 연산\n")
	b = a++; //a를 b에 대입 후에 a+1 
	//a++; b = a; 이렇게 쓰는걸 추천한대 
	printf("a : %d\n", a); //a=11
	printf("b : %d\n", b); //b=10
 } 
