#include <stdio.h>

int main() {
	int a, b;

	scanf("%d%d", &a, &b); //&:포인터(분리돼있는 숫자 두개를 구분해서 인식)

	int hap = a + b;
	int cha = a - b;
	int gop = a * b;
	int mok = a / b;

	printf("%d + %d = %d\n", a, b, hap);
	printf("%d - %d = %d\n", a, b, cha);
	printf("%d * %d = %d\n", a, b, gop);
	printf("%d / %d = %d\n", a, b, mok);
}
