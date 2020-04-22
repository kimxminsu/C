#include <stdio.h>
void chline(char munja,int number);
int main() {
	char ch;
	int i,j;
	scanf("%c %d %d", &ch,&i,&j);
	chline('+',i-1);
	chline(ch,j-i+1);
	chline('+',i-1);
}
void chline(char munja,int number) {
	int a;
	for (a=0;a<number;a++) {
		printf("%c",munja);
	}
}
