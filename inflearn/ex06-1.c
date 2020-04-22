#include <stdio.h>

int main()
{
	printf("%d %d %d %d\n", sizeof(long), sizeof(char), sizeof(float), sizeof(double));
	
	int a; char b; float c; //한줄에 여러문장(기준=;) 가능
	double
		d; //여러줄에 한문장 가능
	printf("%d %d %d %d\n", sizeof(a), sizeof(b), sizeof(c), sizeof(d));
}
//sizeof(x):x의 크기
//x:형(int, float...)/변수이름(a,b,c)
