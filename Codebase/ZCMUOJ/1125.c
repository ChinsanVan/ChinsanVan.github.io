#include<stdio.h>
int main(){
	int n,i,j;
	while(~scanf("%d",&n)){
		for(i=0;i<n;i++){
			printf("a");
			for(j=0;j<n-i-1;j++){
				printf(" ");
			}
			for(j=0;j<i+1;j++){
				printf("%c",97+j);
			}
			printf("\n");
		}
		printf("\n");
	}
	
	return 0;
} 
