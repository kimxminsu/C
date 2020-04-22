#include <stdio.h>
#include <string.h>

int main () {
	char name1[11];
	char name2[11];
	int name3=0;
	int name4=0;
	int name=0;
	float num1;
	float num2;
	float num3;
	float score;
	scanf("%s", name1);
	scanf("%s", name2);
	scanf("%f", &num1);      
	scanf("%f", &num2);
	scanf("%f", &num3);
	name3=strlen(name1);
	name4=strlen(name2);
	name=name3+name4;
	score=(num1+num2+num3)/3;

	printf("\"%-10s%10s\"\t%.1f", name1, name2, score);

}
