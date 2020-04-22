#include <stdio.h>

int main () {
	int a, b;
	for (b=1;b<=9;b++) {

		 {for (a=2;a<=9;a++)
		 	if ((a*b)%2==0) {
				printf("%d * %d = %d	", a, b, a*b);
				printf("	"); 
			}	
		}
	}


}
