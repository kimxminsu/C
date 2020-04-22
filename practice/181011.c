//1부터 10까지의 합 
#include <stdio.h>
int main() {
	int i,sum;
	sum=0;
	for (i=1;i<=10;i++) {
		sum=sum+i;
		
	}
	printf("%d", sum);
}

//1부터 n까지의 합
#include <stdio.h>
int main() {
	int i,sum,n;
	scanf("%d", &n);
	sum=0;
	for (i=1;i<=n;i++) {
		sum=sum+i;
		printf("%d\n", sum);
	}
	
} 

//n부터 m까지의 합
#include <stdio.h>
int main() {
	int i,sum,n,m;
	scanf("%d", &n);
	scanf("%d", &m);
	sum=0;
	for (i=n;i<=m;i++) {
		sum=sum+i;
		printf("%d\n", sum);
	}
	
} 

//m개의 수만큼 입력받아서 합 출력 
#include <stdio.h>
int main() {
	int i,sum,n,m;
	scanf("%d", &n);
	sum=0;
	for (i=1;i<=n;i++) {
		scanf("%d", &m); //&꼭 붙여주기!! 
		sum+=m; //sum=sum+m이랑 똑같은 뜻 
		printf("%d\n", sum);
	}
	
}
