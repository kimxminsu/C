//switch (if���� ����)

#include <stdio.h>

int main() {
	int choice;
	
	makeChoice: // go to ������ �̰� �Է��ؾߵ�.
	
	printf("�� ���� : 1\n");
	printf("�ҷ����� : 2\n");
	printf("���� : 3\n");
	pritnf("ũ���� : 4\n");
	
	scanf("%d", %choice);
	
	switch (choice) {
		case 1:
			printf("�� ����\n");
			break; //�߰�ȣ ������ ��! ����. �Ⱦ��� case2�� �Ѿ��
		case 2:
			printf("�ҷ�����\n");
			break;
		case 3:
			printf("����\n");
			break;
		case 4:
			printf("ũ����\n");
			break;
		default:
			printf("�߸� �Է��ϼ̽��ϴ�.\n");
			goto makeChoice; //goto(�����۸�ũ������?) ���������. while�̶� ��������
			break;
	}
	
	/*
	if (choice == 1) {
		printf("�� ������.")
	}
	else if (choice ==2 {
		printf("�ҷ�����\n");
	}
	else if (choice ==3 {
		printf("����"\n)
	}
	else if (choice ==4 {
		printf("ũ����"\n)
	}
	*/
}
