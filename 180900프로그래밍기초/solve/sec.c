#include <stdio.h>
#define SEC_PER_MIN 60
int main(void)
{
    int sec, min, left;
    
    while (1)
    {
    	
    	scanf("%d", &sec);
    	
    	if (sec<=0) break; //종료 조건 
    	
        min = sec / SEC_PER_MIN;
        left = sec % SEC_PER_MIN;
        
        printf("Time in minute(s): %d = %d hour(s) and %d minute(s)\n", sec,
               min, left);
        
        
    }
    
    return 0;
}
