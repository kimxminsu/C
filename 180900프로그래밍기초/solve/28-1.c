#include <stdio.h>
int main ()
{
    int i,num,num1,sum=0,o;
    scanf("%d",&i);
     
    for(num=0; num<i; num++){
        scanf("%d",&num1);
        sum=sum+num1;
        }         
        printf("%d", sum);
    return 0;
}
