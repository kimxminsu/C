#include <stdio.h>
int correct(int* x) {
	
	int data = *x;

	if(data >= 'A' && data <= 'Z') {
		return data-'A'+1;		
	} else if(data >= 'a' && data <='z') {
		return data - 'a' + 1;
	} else if(data == 10 || data == 32) {
		return -1;
	} else {		
		return 999;
	}
}
int main() {
	int ch;
	while((ch = getchar()) != EOF) {
		int res = correct(&ch);
		if(res == -1) continue;
		else if (res != 999) printf("%c is a letter #%d.\n",ch,res);
		else printf("%c is not a letter.\n",ch);
	}
}
