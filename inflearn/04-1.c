#include <stdio.h>

int main()
{
	int a = 2; //초기화(선언과 동시에 대입) 
	int b = 3;
	
	printf("%d + %d = %d\n", a, b, a + b);
	
	int abc; //O
	int 2a; //X
	int a2; //O
	int AAAA; //O
	//변수이름:알파벳 대소문자,_,숫자(맨앞에오는경우제외) 
	
	int hap = a + b;
	
	printf("%d + %d = %d\n", a, b, hap);
}
