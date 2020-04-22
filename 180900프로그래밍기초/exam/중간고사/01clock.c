#include <stdio.h>
int main () {
	int n;
	int day=0,hour=0,minute=0,second=0;
	int day2=0,hour2=0,minute2=0,second2=0;
	while (1) {
		scanf("%d", &n);
		if (n<=0) break;
		day=n/(24*60*60);
		day2=n%(24*60*60);
		//printf("dfdf%d%d\n", day, day2);
		hour=day2/(60*60);
		hour2=day2%(60*60);
		minute=hour2/60;
		minute2=hour2%60;
		second=minute2;
		printf("%d second(s) = %d day(s) %d hour(s) %d minute(s) and %d second(s)\n", n,day,hour,minute,second);
	}
	
}
