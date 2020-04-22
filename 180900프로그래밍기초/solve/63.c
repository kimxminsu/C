#include <stdio.h>
int main(void)
{
    int ch;
    int big=0,small=0;
    
    while ((ch = getchar()) != EOF) {
    	if (ch>='A'&&ch<='Z') big++;
        if (ch>='a'&&ch<='z') small++;
	}
	printf("%d %d", big, small);
    return 0;
}
