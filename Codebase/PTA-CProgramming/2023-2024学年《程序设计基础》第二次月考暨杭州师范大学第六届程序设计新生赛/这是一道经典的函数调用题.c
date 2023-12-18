#include<stdio.h>
#include<math.h>
//#define f(x) pow(x,2)-x+5
//#define g(x) 2*pow(x,2)+x-3
int main(){
	int x,i,j,num[20];
	scanf("%d",&x);
	
	long long a,b,c,d;
	//a=(f(g(f(x)-x))+g(x));
	a=pow(x,2)-x+5-x;
	b=2*pow(a,2)+a-3;
	c=pow(b,2)-b+5;
	d=c+2*pow(x,2)+x-3;
	/*
	for(i=0;a>0;i++){
		num[i]=a%10;
		a=a/10;
	}
	for(j=i-1;j>=0;j--){
		printf("%d",num[j]);
	}*/
	printf("%lld",d);
	return 0;
}

int f(long long x){
	return (pow(x,2)-x+5);
}
int g(long long x){
	return (2*pow(x,2)+x-3);
}

