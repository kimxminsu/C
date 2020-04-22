#include <stdio.h>
double size(double num1,double num2,double num3);
int main () {
	double n1,n2,n3;
	while(scanf("%lf %lf %lf",&n1,&n2,&n3)!=0) {
		size(n1,n2,n3);
	}
}
double size(double num1,double num2,double num3) {
	double L=0.0, M=0.0, S=0.0;
	/*if (num1<num2&&num2<num3) S=num1;M=num2;L=num3;
	if (num1<num2&&num3<num2&&num1>num3)-num3;M=num1;L=num2;
	if (num2<num1&&num1<num3) S=num2;M=num1;L=num3;
	if (num2<num1&&num3<num1&&num2>num3) S=num2;M;num3;L=num1;
	if (num2<num1&&num3<num1&&num3>num2) S=num3;M;num2;L=num1;*/
	if(num1<num2) {
		if(num2<num3) {
			S=num1;
			M=num2;
			L=num3;
		}
		if(num3<num2) {
			L=num2;
			if(num1<num3) {
				S=num1;
				M=num3;
			}
			else{
				S=num3;
				M=num1;
			}
		}	
	}
	if(num2<num1) {
		if(num1<num3) {
			S=num2;
			M=num1;
			L=num3;
		}
		if(num3<num1) {
			L=num1;
			if(num2<num3) {
				S=num2;
				M=num3;
			}
			if(num3<num2) {
				S=num3;
				M=num2;
			}
		}
	}
	printf("%lf %lf %lf\n",S,M,L);
}
