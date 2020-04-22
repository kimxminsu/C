#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	
	if (n % 2) //괄호 안에 값이 1(홀수)이면 0이 아니므로 실행, 이진법을 활용하는 테크닉~?, c언어에서만 작동 
	{
		printf("n은 홀수\n");
	}
	else
	{
		printf("n은 짝수\n");
	}
}
