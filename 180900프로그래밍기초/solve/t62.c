#include <stdio.h>

int main()
{
	char ch;
	int space,newline,word;
	space=newline=word=0;
	
	while((ch=getchar())!=EOF)
	{
		if(ch==' ')
		space++;
		else if(ch=='\n')
		newline++;
		else
		word++;	
	}
	printf("%d %d %d",space,newline,word);
}
