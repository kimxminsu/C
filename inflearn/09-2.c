/*
2. 체중(kg, 실수)과 키(m, 실수)를 입력받아서 체질량 지수를 구하는 프로그램을 만들어 보세요.
*/ 

#include <stdio.h>
int main()
{
	float weight, height;
	scanf("%f %f", &weight, &height);
	printf("%f", weight/((height/100)*(height/100)));
 } 
