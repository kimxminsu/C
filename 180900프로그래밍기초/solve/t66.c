#include <stdio.h>

void chline(char,int,int);

int main()
{
	char word;
	int i,j;
	
	scanf("%c %d %d",&word,&i,&j);
	
	chline('+',1,i-1);
	chline(word,i,j);
	chline('+',1,i-1);
	
	return 0;
}
void chline(char ch,int n,int m)
{
	int count;
	
	for(count=n; count<=m; count++)
		printf("%c",ch);
}
