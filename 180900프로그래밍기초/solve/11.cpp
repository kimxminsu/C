#include <stdio.h>
int main() {
	char a[21];
	int i;
	
	scanf("%s", a);
	printf("%p\n", a);
	for(i=0;i<20;i++){
		printf("%p\n", &i);
	}


}
