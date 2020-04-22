#include <stdio.h>
void correct(int* x) {
	
	int data = *x;

	if(data == 10 || data ==32) return; // Enter
	
	if(data>='A'&&data<='Z') {
		printf("%c is a letter #%d.\n",data,data-'A'+1);
	} else if(data>='a'&&data<='z') {
		printf("%c is a letter #%d.\n",data,data-'a'+1);	
	} else {
		printf("%c is not a letter.\n",data);
	}
}
int main() {
	int ch;
	while((ch=getchar())!=EOF) {
		correct(&ch);
	}
}
