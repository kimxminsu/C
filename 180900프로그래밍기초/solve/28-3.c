#include <stdio.h>

int main(void)
{
   long long int a,b,c,d,sum=0;
   scanf("%lld %lld",&a,&b);
   c=a-b;
   d=a+b;
   while(c<=d)
   {
      sum+=c;
      c++;
   }
   printf("%lld",sum);
   return 0;
}
