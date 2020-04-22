#include <stdio.h>
#include <string.h>
int main () {
	float gallon;
	float mile;
	float result1;
	float result2;
	scanf("%f %f", gallon, mile);
	result1=gallon/mile;
	result2=(gallon*3.785)/(mile*1.609);
	printf("%f mpg or %f liters / 100km.", result1, result2);
}
