#include <stdio.h>
#define mile 1.609
#define gelrun 3.785


int main(void)
{
   float m, g;
   
   scanf("%f", &m);
   scanf("%f", &g);
   
   
   printf("%.1f mpg or %.1f liters / 100Km.",m/g, ((100/mile)/(m/g))*gelrun);
   
   return 0;
   
}
