#include <stdio.h>
#include <string.h> //strlen();
int main ()
{
char name1[31];
char name2[31];
int age;
int num1;
int num2;
scanf("%s", &name1);
scanf("%s", &name2);
scanf("%d", &age);
num1=strlen(name1);
num2=strlen(name2);

printf("%d %d", num1+num2, age);
}
