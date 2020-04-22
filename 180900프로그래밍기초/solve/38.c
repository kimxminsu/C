#include <stdio.h>
int main(void) {
	int n;
	double jjaks = 0.0;
	int jjak = 0;
	double hols = 0.0;
	int hol = 0;
	while (scanf("%d", &n) == 1 && n != 0) {
		if (n % 2 == 0) {
			jjaks += n;
			++jjak; 
		}
		else {// n % 2 == 1 ¶Ç´Â -1
			hols += n;
			++hol;
		}
	}
	printf("%d ", jjak);
	

	if (jjak==0||jjaks==0)
		printf("0.00 ");
	else 
		printf("%.2lf ", jjaks / (double)jjak);
		
	printf("%d ", hol);
	
	if (hol==0||hols==0)
		printf("0.00");
	else 
		printf("%.2lf", hols / (double)hol);	
}
