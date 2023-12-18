#include<stdio.h>
#define min(a,b) (a<=b)?a:b
int main(){
	int i,t;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		int n,k;
		scanf("%d %d",&n,&k);
		if(n==k){
			int p,q,j;
			for(p=1;p<=n;p++){
				j=p;
				for(q=0;q<n;q++){
					if(q==0)printf("%d",j);
					else printf(" %d",j);
					j=(j)%n+1;				
				}printf("\n");
			}//printf("\n");
		}
		else if(n<k){
			int p,q,j=1;
			for(p=1;p<=n;p++){
				j=p;
				for(q=0;q<n;q++){
					if(q==0)printf("%d",j);
					else printf(" %d",j);
					j=(j)%n+1;				
				}printf("\n");
			}//printf("\n");
		}
		else if(n>k){
			int p,q,j=1;
			for(p=1;p<=n;p++){
				if(n%2==0)j=j%k+1;
				for(q=0;q<n;q++){
					if(q==0)printf("%d",j);
					else printf(" %d",j);
					j=j%k+1;	
				}printf("\n");
			}//printf("\n");
		}
	}
	return 0;
}
