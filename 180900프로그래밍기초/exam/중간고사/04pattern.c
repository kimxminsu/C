#include <stdio.h>
int main () {
	int num;
	char ppre,pre,ch;
	ppre=pre=' ';
	while ((ch=getchar())!='#') {
		
		if(ppre=='e'&&pre=='a'&&ch=='r') {
			num++;
		}
		if(pre=='o'&&ch=='v') {
			num++;
		}
		ppre=pre;
		pre=ch;
	}
	printf("%d", num);
}
