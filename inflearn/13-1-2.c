//13-1 간단하게 줄이기! 

#include <stdio.h>

int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	
	if ( a > b ) //a>b>c; a>c>b; c>a>b
	{
		if ( a > c )
			printf("%d\n", a); //한문장에 ;한개라면 {}생략가능 (되도록이면 써주자) 
		else //c>a
			printf("%d\n", c); //한문장에 ;한개라면 {}생략가능 
	}
	else if ( b > c ) //else + if = else if (추천은 안함) 
			printf("%d\n", b); //한문장에 ;한개라면 {}생략가능 
		else //c>b
			printf("%d\n", c); //한문장에 ;한개라면 {}생략가능 
}

//+)줄바꿈도 생략가능 
