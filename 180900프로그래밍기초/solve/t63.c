#include <stdio.h>

int main()
{
	char ch;
	int s_word,b_word;
	s_word=b_word=0;
	
	while((ch=getchar())!=EOF)
	{
		if(ch>='a'&&ch<='z')
		s_word++;
		else if(ch>='A'&&ch<='Z')
		b_word++;
	}
	
	printf("%d %d",b_word,s_word);
}
