//형변환:자료형을 다른 자료형으로 바꾸는 작 
업 
#include <stdio.h>

int main ()
{
	int math = 90, korean = 95, english = 96;
	int sum = math + korean + english;
	double avg = sum / 3;
	
	printf("%f\n", avg); //93.666667(X) 93.000000(O)
	//sum(정수)/3(정수)=93(정수) 
	//예) 5/3=1.xxx(x) 1(o) 처럼
	//실수/정수=실수
	//실수/실수=실수
	
	//Q.결과값을 실수로 출력하려면?
	double sum = math + korean + english;
	//A.sum(line6)을 아예 double로 바꾸거나
	double avg = (double)sum / 3;
	//  sum(line7)을 잠시 double로 바꾼다.
	
	// + - * 도 마찬가지 
 } 
