#include <stdio.h>
void to_base_n(long long int x,int y);
int main()
{
	long long int n;
	int b;
	scanf("%lld %d",&n,&b);
	to_base_n(n,b);
}
void to_base_n(long long int x,int y)
{
	long long int r;
	
	r = x%y;
	if(x>=y)
	to_base_n(x/y,y);
	printf("%d",r);
}
