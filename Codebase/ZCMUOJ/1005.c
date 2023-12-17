#include<stdio.h>
int main(){
	int n,m,a,s1,s2;
	while(scanf("%d %d %d",&n,&m,&a)!=EOF){
		if(n%a!=0)s1=n/a+1;
		else s1=n/a;
		if(m%a!=0)s2=m/a+1;
		else s2=m/a;
		printf("%d\n",s1*s2);
	}
	
	return 0;
}
