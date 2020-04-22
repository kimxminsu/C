#include <stdio.h>
int main () {
	int n,i;
	char abcwhat;
	double num, numa, numb, numc;
	double sum,suma, sumb, sumc;
	double result;
	
	scanf("%d\n", &n); //총 몇 줄을 입력받을지 
	//printf("%d\n", n);
	for (i=0;i<n;i++) {
		//printf("%d\n", i);
		scanf("%c %lf\n", &abcwhat, &num); //a b c 중에 어떤거 입력 받는지 
		/*if (abcwhat=='a') { //a라면 

			suma+=num; // a가 총 몇개인 지 
		}
		else if (abcwhat=='b') { //b라면 

			sumb+=num; //b 총 몇개 
		}
		else if (abcwhat=='c') { //c라면 

			sumc+=num; //c 총 몇개
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
	result=suma*2.05+sumb*1.15+sumc*1.09; //총 가격 
	sum=suma+sumb+sumc; //총 갯수 
	if (result>=100) { //100달러 이상이면0 
		result=result*0.95; //5% 할인 
	}
	if (sum<5) { //총 갯수가 총 5개 이하 면 
		result+=6.50; //기본배송비 
	} 
	else if (sum>=5 && (sum)<20) {
		result+=14.00; // 5~20 배송비 
	}
	else if (sum>=20) {
		result+=14.00; // 5~20 베송비 
		result+=(sum*0.50); // 1파운드당 추가배송비 
	}
	printf("%.2lf", result); 
}
