#include<stdio.h>
int main(){
	int n,i,m,s1,s2;
	double a=0.00;
	while(scanf("%d",&n)!=EOF){
		a=0.00;
		if(n==0)break;
		for(i=0;i<n;i++){
			scanf("%d",&m);
			a+=m;
		}
		printf("%.2f\n",a/n);
	}
	
	return 0;
}
