//����ȯ:�ڷ����� �ٸ� �ڷ������� �ٲٴ� �� 
�� 
#include <stdio.h>

int main ()
{
	int math = 90, korean = 95, english = 96;
	int sum = math + korean + english;
	double avg = sum / 3;
	
	printf("%f\n", avg); //93.666667(X) 93.000000(O)
	//sum(����)/3(����)=93(����) 
	//��) 5/3=1.xxx(x) 1(o) ó��
	//�Ǽ�/����=�Ǽ�
	//�Ǽ�/�Ǽ�=�Ǽ�
	
	//Q.������� �Ǽ��� ����Ϸ���?
	double sum = math + korean + english;
	//A.sum(line6)�� �ƿ� double�� �ٲٰų�
	double avg = (double)sum / 3;
	//  sum(line7)�� ��� double�� �ٲ۴�.
	
	// + - * �� �������� 
 } 
