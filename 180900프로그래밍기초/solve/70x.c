#include <stdio.h>
int correct(int *x) {
	if(*x>='A'&&*x<='Z') {
			printf("%c is a letter #%d.\n",*x,*x-'A'+1);
		}
		if(*x>='a'&&*x<='z') {
			printf("%c is a letter #%d.\n",*x,*x-'a'+1);
		}
		else if(*x==' ') {
			printf("");
		}
		else if(*x=='\n') {
			printf("");
		}
		else {
			printf("%c is not a letter.\n",*x);
		}
}
int main() {
	int ch;
	while((ch=getchar())!=EOF) {
		correct(&ch);
	}
}
