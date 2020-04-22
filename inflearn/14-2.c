//goto랑 while의 연관성 
//1~10까지 출력하는 프로그램 

#include <stdio.h>

int main() {
	int i = 1;
	
	repeat;
	printf("%d\n", i);
	if (i < 10) {
		i++;
		goto repeat;
	}
} 
