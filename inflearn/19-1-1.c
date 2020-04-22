#include <stdio.h>

int main () {
	int score;
	scanf("%d", &score);
	
	if (score>100 || score<0) {
		printf("잘목입력하셨습니다.\n"); }
	else if (score>=90)
		printf("A\n");
	else if (score>=80) //90이상은 위에 걸러졌으므로 굳이 안써도됨 
		printf("B\n");
	else if (score>=70)
		printf("C\n");
	else if (score>=60)
		printf("D\n ");
	else
		printf("E\n ");
}
}
