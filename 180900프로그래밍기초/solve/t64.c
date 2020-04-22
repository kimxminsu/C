#include <stdio.h>

int main()
{
	double a,b,n,w;
	double x,y;
	
	scanf("%lf %lf %lf %lf",&a,&b,&n,&w);
	
	if(a==b)
	{
		if(w==b*n)
		{
			if(n==2)
				printf("1 1");
			else
				printf("-1");
		}
		else
			printf("-1");
	}
	else
	{
		x = (w-b*n)/(a-b);
		y = n - x;
		if((int) x != x || (int) y != y || x<=0 || y<=0)
			printf("-1");
		else
			printf("%.lf %.lf",x,y);			
	}
}
