#include <stdio.h>
#include <ctype.h>

int word(char);
int main()
{
	char ch;
	
	while((ch=getchar())!=EOF)
	{
		if(word(ch)==0)
			;
		else if(word(ch)==-1)
			printf("%c is not a letter.\n",ch);
		else
			printf("%c is a letter #%d.\n",ch,word(ch));
	}
}
int word(char ch)
{
	int r;
	
	if((ch>='a' && ch<='z')||(ch>='A')&&(ch<='Z'))
		r = toupper(ch)-64;
	else if(ch=='\n' || ch==' ')
		r = 0;
	else
		r = -1;
	
	return r;
}
