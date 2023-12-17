#include<stdio.h>
#define pi 3.141592

int main(){
	int w,i,t,a,b,c,d;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d %d %d %d",&a,&b,&c,&d);
		int s=a*a;w=0;
		if(b*c>s){
			s=b*c;w=1;
		}
		if(pi*d*d>s){
			printf("Circle\n");
			w=3;
		}
		if(w==1)printf("Rectangle\n");
		if(w==0)printf("Square\n");
	}
	return 0;
}
