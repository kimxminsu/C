#include <stdio.h>
int main() {
	int a;
	printf("%p\n", &a);
	printf("%d\n", a);
	a=4;
	printf("%p\n", &a);
	printf("%d\n", a);
	int* b; //포인터변수 
	printf("%p\n", &b);
	printf("%d\n", b);
	b=&a;
	printf("%p\n", &b);
	printf("%p\n", b);
	printf("%d", *b); //
	
	
}
