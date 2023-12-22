#include<stdio.h>
int main(){
	int i,r;scanf("%d",&r);
	for(i=0;i<r;i++){
		int m,j,n,flag=0;scanf("%d %d",&m,&n);
		int list[10000],k=0;
		for(j=0;f(j)<=n;j++){
			if(f(j)>=m&&f(j)<=n){
				list[k]=f(j);k++;flag=1;
			}
		}
		for(j=0;j<k;j++){
			if(j==0)printf("%d",list[j]);
			else printf(" %d",list[j]);
		}
		if(flag==1)printf("\n");
	}
	return 0;
}

int f(int n){
	if(n==0||n==1)return 1;
	else return f(n-1)+f(n-2);
}
