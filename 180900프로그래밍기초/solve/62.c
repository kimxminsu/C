#include <stdio.h>
int main(void)
{
    int ch;
    int space=0,enter=0,namuji=0;
    
    while ((ch = getchar()) != EOF)
        if (ch==' ') space++;
        if (ch=='\n') enter++;
        if (ch!=' '&&ch!='\n') namuji++;
    
    return 0;
}
