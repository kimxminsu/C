//중첩 for문

#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) { //i는 위에 사용한 변수이므로 J 써! 
			printf("*");
			//Q.L10에 j부터 i까지로 바꿔서 출력하면? A.계단형식의 별모양
			//()밖에서 i 써도되는이유:{}밖으로 나간게 아니기때문 
		}
		printf("\n")
	}
} 
