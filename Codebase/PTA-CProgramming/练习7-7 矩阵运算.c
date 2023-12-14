#include<stdio.h>
#include <stdlib.h>

int main(){
	int n,i,j;scanf("%d\n",&n);
	int a[n][n],sum=0;
	//i为行，j为列 
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
			if(((i+j)!=(n-1))&&(j!=n-1)&&(i!=n-1))sum+=a[i][j];
		}  
	}printf("%d",sum);
	return 0;
}
