//1���� 10������ �� 
#include <stdio.h>
int main() {
	int i,sum;
	sum=0;
	for (i=1;i<=10;i++) {
		sum=sum+i;
		
	}
	printf("%d", sum);
}

//1���� n������ ��
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

//n���� m������ ��
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

//m���� ����ŭ �Է¹޾Ƽ� �� ��� 
#include <stdio.h>
int main() {
	int i,sum,n,m;
	scanf("%d", &n);
	sum=0;
	for (i=1;i<=n;i++) {
		scanf("%d", &m); //&�� �ٿ��ֱ�!! 
		sum+=m; //sum=sum+m�̶� �Ȱ��� �� 
		printf("%d\n", sum);
	}
	
}
