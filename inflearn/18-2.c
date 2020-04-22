//continue:이 조건일 때만 루프를 건너뜀 딱히 쓸 필요 없이 !=으로 대체가능 

#inclue <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	
	//1+2+4+5+7+8+10+11+13...
	
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		if (i % 3 == 0) {
			continue;
		}
		sum += i;
		/*
		if (i % 3 != 0) {
			sum += i;
		}
		*/
	}
	printf("%d\n", sum);
} 
