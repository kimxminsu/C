#include <stdio.h>
int main () {
	int a=0,b=0,n=0,w=0, i=0,x=0,y=0,xx=0,yy=0, cnt=0,resultx=0,resulty=0;
	scanf("%d %d %d %d",&a,&b,&n,&w);
	for (i=0;i<=n-2;i++) {
		x=i;    //0 1 2 [3] 4 5 6 7
		y=n-2-i;//7 6 5 [4] 3 2 1 0
		xx=x+1; //      [4]
		yy=y+1; //      [5]
		printf("ooo%d %d %d\n",resultx,resulty,cnt);
		if (a==b&&b*n==w) {
			cnt++;//경우의수 1증가
			resultx=xx;//저장 
			resulty=yy;//저장 
			printf("else%d %d %d\n",resultx,resulty,cnt);
		}
		else if (xx=((b*n)-w)/(b-a)) {//식 변형          
			cnt++;//경우의수 1증가 
			resultx=xx;//저장 
			resulty=yy;//저장 
			printf("else%d %d %d\n",resultx,resulty,cnt);
		}
	}
	if (cnt==1) printf("%d %d", resultx, resulty);//경우의수가1가지 
	else if (cnt>1||cnt==0) printf("-1");//경우의수가2가지이상이거나0일때 
}
