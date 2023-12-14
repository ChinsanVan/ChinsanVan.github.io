#include<stdio.h>

int main(){
	int n,i,j;scanf("%d",&n);
	for(i=0;i<n/2;i++){
		for(j=0;j<(n-(i*2+1))/2;j++)printf("  ");
		for(j=0;j<i*2+1;j++)printf("* ");
		//for(j=0;j<(n-(i*2+1))/2;j++)printf("  ");
		printf("\n");
	}
	for(i=0;i<n;i++)printf("* ");
	printf("\n");
	for(i=n/2-1;i>-1;i--){
		for(j=0;j<(n-(i*2+1))/2;j++)printf("  ");
		for(j=0;j<i*2+1;j++)printf("* ");
		//for(j=0;j<(n-(i*2+1))/2;j++)printf("  ");
		if(i!=0)printf("\n");
	}
	return 0;
}
