#include <stdio.h>
int main () {
	int n,i;
	char abcwhat;
	double num, numa, numb, numc;
	double sum,suma, sumb, sumc;
	double result;
	
	scanf("%d\n", &n); //�� �� ���� �Է¹����� 
	//printf("%d\n", n);
	for (i=0;i<n;i++) {
		//printf("%d\n", i);
		scanf("%c %lf\n", &abcwhat, &num); //a b c �߿� ��� �Է� �޴��� 
		/*if (abcwhat=='a') { //a��� 

			suma+=num; // a�� �� ��� �� 
		}
		else if (abcwhat=='b') { //b��� 

			sumb+=num; //b �� � 
		}
		else if (abcwhat=='c') { //c��� 

			sumc+=num; //c �� �
		}*/
		switch (abcwhat) {
			case 'a':
				suma+=num;
				break;	
			case 'b':
				sumb+=num;
				break;
			case 'c':
				sumc+=num;	
		}
	}
	result=suma*2.05+sumb*1.15+sumc*1.09; //�� ���� 
	sum=suma+sumb+sumc; //�� ���� 
	if (result>=100) { //100�޷� �̻��̸�0 
		result=result*0.95; //5% ���� 
	}
	if (sum<5) { //�� ������ �� 5�� ���� �� 
		result+=6.50; //�⺻��ۺ� 
	} 
	else if (sum>=5 && (sum)<20) {
		result+=14.00; // 5~20 ��ۺ� 
	}
	else if (sum>=20) {
		result+=14.00; // 5~20 ���ۺ� 
		result+=(sum*0.50); // 1�Ŀ��� �߰���ۺ� 
	}
	printf("%.2lf", result); 
}
