#include <stdio.h>
int main () {
	int a, b, n, w;
	int x;
	scanf("%d %d %d %d", &a, &b, &n, &w);

	if (a==b)
		if (n==2) // 100 100 2 200
			printf("1 1");
		else  //100 100 4 400
			printf("-1");
			
	x=((b*n)-w)/(b-a);
	
	if (x==0 || (n-x)==0) //3 4 8 32
		printf("-1");
	
	else //3 4 9 32
		printf("%d %d", x, n-x);
		
}
