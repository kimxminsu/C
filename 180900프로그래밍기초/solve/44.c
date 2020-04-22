#include <stdio.h>
#include <stdio.h>
int main(void)
{
    int numa, numb, num1, num2;
    int div;
    int n=1;
    
    scanf("%d %d", &numa, &numb);
    if (numa>=numb) {
    	num1=numb;
    	num2=numa;
	}
    else {
    	num1=numa;
    	num2=numb;
	}
    	for (div = 2; div <= num1; div++) {
            if ((div * div) != num1) {
            	if (num1 % div == 0) {
                	if (num2 % div ==0) {
						n=div;
					}
				}
            }
            if ((div * div) == num1) {
            	if (num1 % div == 0) {
                	if (num2 % div ==0) {
						n=div*div;
					}
				}
            }
        }
        printf("%d", n);
    return 0;
}
