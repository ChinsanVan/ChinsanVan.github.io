#include<stdio.h>
int main(){
	int m,n,i,j,a,sum=0;scanf("%d %d",&m,&n);
	for(i=0;i<m;i++){
		sum=0;
		for(j=0;j<n;j++){
			scanf("%d",&a);
			sum+=a;
		}
		printf("%d\n",sum);
	}
	return 0;
}
