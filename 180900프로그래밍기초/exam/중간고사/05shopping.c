#include <stdio.h>
int main () {
	int n,i;
	int num=0,numnum=0,sum=0, sum0=0;
	double basong,halin;
	char what;
	scanf("%d\n", &n);
	for (i=1;i<=n;i++) {
		scanf("%c %d\n", &what,&numnum);
		if (what=='a') {
			num+=numnum;
			sum+=(3500*numnum);
		}
		else if (what=='b') {
			num+=numnum;
			sum+=(1250*numnum);
		}
		else if (what=='c') {
			num+=numnum;
			sum+=(1150*numnum);
		}
		else if (what=='d') {
			num+=numnum;
			sum+=(2700*numnum);
		}
		else if (what=='e') {
			num+=numnum;
			sum+=(990*numnum);
		}
	}
			
	if (num*100<600) {
		basong=3000;
	}
	else if (num*100>=600 && num*100<2000) {
		basong=(num*550);
	}
	else if (num*100>=2000) {
		basong=(num*500);
	}

	
	if (sum+basong>=20000 && sum+basong<30000) {
		halin=(sum+basong)*0.05;
	}
	else if (sum+basong>=30000) {
		halin=(sum+basong)*0.1;
	}
	result = sum+basong-halin;
	printf("%d %.0lf %.0lf %.0lf", sum,basong,halin,result);
}
