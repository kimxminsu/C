#include <stdio.h>
int main() {
	float speed, size, byte, time;
	scanf("%f %f", &speed, &size);
	byte=speed/8;
	time=size/byte;
	printf("%.2fsec", time);	
}
