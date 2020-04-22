#include <stdio.h>

int notPrime[9999999];  
int num;

int main(){
    int cnt = 0; 
    scanf("%d", &num);
    notPrime[0] = notPrime[1] = 1;  
    for (int i = 2; i*i <= num; i++){
        if (!notPrime[i]){
            for (int j = i*i; j <= num; j += i){
                notPrime[j] = 1;  
            }
        }
    } 
    for (int i = 0; i <= num; i++){
        if (!notPrime[i]) ++cnt;  
    }
    printf("%d",cnt); 
    return 0; 
}
