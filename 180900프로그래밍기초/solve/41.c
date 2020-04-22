#include <stdio.h>
int main(void)
{
	int limit;
	int num;
	int div;
	int n=0;
	int correct=0;
	scanf("%d", &limit);
	for (num = 2; num <= limit; num++)
		{
			for (div = 2, correct=0; (div * div) <= num; div++)
			if (num % div == 0)
			correct=1;
			if (correct==0)
			n++;
		}
	printf("%d", n);
}
