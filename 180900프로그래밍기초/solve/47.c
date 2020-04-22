#include <stdio.h>
int main () {
	char ch;
	int n, nn;
	scanf("%d\n",&n);
	while ((ch=getchar())!='\n') 
		//printf("%d", ch);
		
		if (ch==' ') {
			printf(" ");
		}
		else if (ch>=65 && ch<=90) {
			if (ch-n<65) {
				ch+=26;
				printf("%c", ch-n);
			}
			else {
				printf("%c", ch-n);
			}
		}
		
		
	}
