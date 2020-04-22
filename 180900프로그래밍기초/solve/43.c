#include <stdio.h>
int main(void)
{
    long long num;          // number to be checked
    long long div;          // potential divisors
    int correct=0;               // prime flag
    int n=0;
    
    scanf("%ld", &num);
        for (div = 2, correct=0; (div * div) <= num; div++)
        {
            if (num % div == 0)
            {
                if ((div * div) != num) {
                    n+=2;
                    printf("%d %d\n", div, num/div);
            	}
                else {
                    n++;
                    printf("%d\n", div);
                correct=1;
            	}
            }
        }
        if (correct=0)
            printf("0");
        else printf("%ld", n);
    return 0;
}
