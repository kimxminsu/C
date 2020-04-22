#include <stdio.h>
int main () {
	float a, b, result;
	
	while (1) {
		int status = scanf("%f%f", &a, &b);
		//printf("status : %d\n", status);
		//if(getchar() != '\n') break;
		result=(a-b)/(a*b);
		if (status==0) break;
 		printf("%.3f\n", result);
	}
}


