#include <stdio.h>
int main()
{
	float num1;
	float num2;
	float num3;
	float num4;
	float result;
	scanf("%f", &num1);
	scanf("%f", &num2);
	scanf("%f", &num3);
	scanf("%f", &num4);
	result=(num4/(num1+num2+num3+num4))*100;
	printf("%.2f% %", result);
}
