//비교 연산자

#include <stdio.h>
int main ()
{
	int a, b;
	scanf("%d %d", &a, &b);
	
	int p = a > b; //거짓:0 참:1 
	int q = a < b;
	int r = a ==b; //==:같다
	
	//bool:진리값 저장용 변수 (1바이트) 
	bool p = a > b; //거짓:0 참:1 
	bool q = a < b;
	bool r = a ==b; //==:같다
	
	printf("%d\n", p);
	printf("%d\n", q);
	printf("%d\n", r);	 
 } 
