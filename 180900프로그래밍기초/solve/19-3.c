#include <stdio.h>

int main (void)
{
    long long n, m, nn, mm;
    long long sum = 0;

    scanf("%lld%lld", &n, &m);
    
    nn=n-m;
    mm=n+m;

	for(sum=0 ; nn <= mm ; nn ++)
    {
        sum = sum + nn;
    }
		
    printf("%lld\n", sum);
}
