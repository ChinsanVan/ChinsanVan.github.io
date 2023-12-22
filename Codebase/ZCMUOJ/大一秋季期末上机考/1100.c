#include<stdio.h>
int main(){
	int n;//scanf("%d",&n);
	//printf("%d",gcd(n,3));//5,3=1 5,5
	//8:1 3 5 7
	//8 2 8%2=0 
	while(~scanf("%d",&n)){
		int i,sum=0;
		for(i=1;i<=n;i++){
			if(gcd(n,i)==1){
				sum++;
			}
		}
		printf("%d\n",sum);
	}
	return 0;
}

int gcd(int n,int m){
	if(m==0)return n;
	else return gcd(m,n%m);
}
