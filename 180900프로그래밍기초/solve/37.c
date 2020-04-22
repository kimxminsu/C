#include <stdio.h>
int main() {
	char ch;
	int a = 0;
	int b = 0;
		int c = 0;

	while ((ch = getchar()) != '#') {
		if (ch == ' ')
		a++;
		else if (ch == '\n')
		b++;
		else
		c++;
	}
	printf("%d %d %d\n", a,b,c);
return 0;
}
