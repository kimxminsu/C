//switch (if보다 간단)

#include <stdio.h>

int main() {
	int choice;
	
	makeChoice: // go to 쓰려면 이거 입력해야됨.
	
	printf("새 게임 : 1\n");
	printf("불러오기 : 2\n");
	printf("설정 : 3\n");
	pritnf("크레딧 : 4\n");
	
	scanf("%d", %choice);
	
	switch (choice) {
		case 1:
			printf("새 게임\n");
			break; //중괄호 밖으로 툭! 나감. 안쓰면 case2로 넘어감ㅠ
		case 2:
			printf("불러오기\n");
			break;
		case 3:
			printf("설정\n");
			break;
		case 4:
			printf("크레딧\n");
			break;
		default:
			printf("잘못 입력하셨습니다.\n");
			goto makeChoice; //goto(하이퍼링크같은거?) 까먹으세요. while이랑 관련있음
			break;
	}
	
	/*
	if (choice == 1) {
		printf("새 게임을.")
	}
	else if (choice ==2 {
		printf("불러오기\n");
	}
	else if (choice ==3 {
		printf("설정"\n)
	}
	else if (choice ==4 {
		printf("크레딧"\n)
	}
	*/
}
