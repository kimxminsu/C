#include <stdio.h>

int main()
{
	float pint;
	float cup;
	float ounce;
	float tablespoon;
	float teaspoon;
	scanf("%f",&cup);
	pint=cup/2;
	ounce=cup*8;
	tablespoon=cup*16;
	teaspoon=cup*48;
	
	printf("%f cups are equivalent to each of the following:\n%f pints\n%f tablespoons\n%f teaspoons",cup,pint,tablespoon,teaspoon);
	
}
