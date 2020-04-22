#include <stdio.h>

int main()
{
   long long int n,i,sum,num;
   sum=0;
   scanf("%lld",&n);
   for(i=1;i<=n;i++)
   {
      scanf("%lld",&num);
      sum += num;
   }
   printf("%lld",sum);
}
