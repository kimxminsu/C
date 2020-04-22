#include <stdio.h>
int main () {
	double a, b, result;
	scanf("%lf%lf", &a, &b);
	if (a==1) {
		if (b>=17850) {
			result=(0.15*17850)+(0.28*(b-17850));
		}
		else {
			result=(0.15*b);
		}
	}
	if (a==2) {
		if (b>=23900) {
			result=(0.15*23900)+(0.28*(b-23900));
		}
		else {
			result=(0.15*b);
		}
	}
	if (a==3) {
		if (b>=29750) {
			result=(0.15*29750)+(0.28*(b-29750));
		}
		else {
			result=(0.15*b);
		}
	}
	if (a==4) {
		if (b>=14875) {
			result=(0.15*14875)+(0.28*(b-14875));
		}
		else {
			result=(0.15*b);
		}
	}
	printf("%.2lf", result);
}
