//연산자 + - / * += -= ++ -- && || !
//제어문-조건문 if() switch(), 반복문 while() for()
//1.시험점수 입력
//90~100:A; 80~89:B; ... 50~59:E;

#include <stdio.h>

int main () {
	int n;
	scanf("%d", &n);
	
	if (90<=n<=100) {
		printf("A\n"); }
	elif (80<=n<=89) {
		printf("B\n"); }
	elif (70<=n<=79) {
		printf("C\n"); }
	elif (60<=n<=69) {
		printf("D\n"); }
	elif (50<=n<=59) {
		printf("E\n "); }
}
