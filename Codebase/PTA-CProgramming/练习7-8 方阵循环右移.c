#include<stdio.h>
#include <stdlib.h>

int main(){
	int n,i,k,j,m;scanf("%d %d\n",&m,&n);
	if(n!=1){
		int a[n][n];
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(j+m%n<=n-1)scanf("%d",&a[i][j+m%n]);
				else scanf("%d",&a[i][j+(m%n)-n]);
				}
			/*
			if(m<n){
				if(j+m<=n-1)scanf("%d",&a[i][j+m]);
				else scanf("%d",&a[i][j+m-n]);
				}
			else if(m>=n){
				scanf("%d",&a[i][j+((m+n)%n)-n]);
				}
				
			};*/
		}
	
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(j!=n-1)printf("%d ",a[i][j]);
				else if(j==n-1&&i!=n-1)printf("%d \n",a[i][j]);
				else if(j==n-1&&i==n-1)printf("%d ",a[i][j]);
			}
		}
	}
	else if(n==1){
		int a;
		scanf("%d",&a);
		printf("%d ",a);
	}
	//i为行，j为列 
	
	return 0;
}
