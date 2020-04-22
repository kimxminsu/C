#include <stdio.h>
#include <string.h>
int main() {
	int n = 0;
	int i = 0;
	char text[100];
	int len;
	char ch1, ch2;
	
	/*while (1) {
		scanf("%[^\n]", text);
		fflush(stdin);
		if (text[0]=='#') break;
		len=strlen(text);
		for (i=0;i<len;i++) {
			if (text[i]=='e'&&text[i+1]=='i') {
				n++;
			}
		}
	}*/
	
	while ((ch1=getchar())!='#') {
		if (ch1=='e') {
			i=1;
		} else if ((ch1!='e')&&(ch1!='i')) {
			i=0;
		}
		else if ((ch1=='i')&&(i==1)) {
			i=0;
			n++;
		}		
		/*(ch1=getchar() == 'e')&&(ch2=getchar() == 'i')
			n++;*/		
	}
	
	printf("%d", n);
	
}
