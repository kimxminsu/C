#include <stdio.h>

int main () {
	long long int i,j,a,b,c,d,e,f;
	scanf("%lld",&a);

	for (;i<6;i++) {
		if (a==1) break;
		for (;a>=100;j++) {
			e=a%10;
			f=a/10;
			b=f/10;
			c=f%10;
			a=e*e+b*b+c*c;
			printf("%lld\n",a);
		}
	
		e=a%10;
		f=a/10;
		b=f/10;
		c=f%10;
		
		a=e*e+b*b+c*c;
		printf("%lld\n",a);
		
		
		
	}
	
	if (a==1) 
		printf("HAPPY\n");
	else
		printf("UNHAPPY\n");
	
	/*for (;i<)
	printf("%d\n", a%10); //³ª¸ÓÁö 
	printf("%d\n", a/10); //¸ò */
}
