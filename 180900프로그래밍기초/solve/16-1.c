#include <stdio.h>
#include <string.h>

int main() {
	char name1[30];
	char name2[30];
	int num1;
	int num2;

	num1=strlen(name1);
	num2=strlen(name2);
	scanf("%s %s", name1, name2);
	printf("%s %s\n", name1, name2);
	printf("%*d%*d\n", num1, num2, num1, num2);
	printf("%s %s\n", name1, name2);
	printf("%-*d%-*d\n", num1, num2, num1, num2);
	
}
