#include <stdio.h>
int main(void)
{
	int a;
	char c[10]="0123456789";
	char d[12]="ABCDEFGHIJKL";
	scanf("%d", &a);
	//printf("입력받은값%d\n",a);
	//printf("%d\n",2017%12);
	a+=56;
	//printf("+56을 한값%d\n",a);
	a%=60;
	//printf("60을 나눈 나머지값%d\n",a);
	printf("%c%c",d[a%12],c[a%10]);
	return 0;
}
//자축인묘진사오미신유술해
//0 1 2 3 4 5 6 7 8 9 10 11 
