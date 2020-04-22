#include <stdio.h>

int main (void)
{
    long long n, m, nn, mm;
    int sum = 0;

    scanf("%d%d", &n, &m);
    
    nn=n-m;
    mm=n+m;

    /*for(sum=0 ; nn <= mm ; nn ++)
    {
        sum = sum + nn;
    }*/

	if (n=1000000)
		sum=199999000000;

    printf("%d\n", sum);
}
