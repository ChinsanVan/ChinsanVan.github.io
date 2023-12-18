#include<stdio.h>
int main(){
	int a,b;
	while((scanf("%d %d",&a,&b))!=EOF){
		if(a==0&&b==0) break;
		else printf("%d\n",gcd(a,b));
	}
	return 0;
}
int gcd(int m,int n){
	if(n==0)return m;
	else return gcd(n,m%n); 
}
