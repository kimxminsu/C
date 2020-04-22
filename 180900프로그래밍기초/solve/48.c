#include <stdio.h>
#include <string.h>
int main() {
	int n1 = 0;
	int i;
	char text;
	
	
	while ((text=getchar())!='\n') {
			if (text=='(') {
				n1++;
				//printf("n1:%d\n", n1);
			}
			else if (text==')') {
				n1--;
				//printf("n1:%d\n", n1);
			}
			if ((n1<0)) break;
		}
		
	if (n1==0) {
		printf("YES");
	}
	else {
		printf("NO");
	}
	
	
}
