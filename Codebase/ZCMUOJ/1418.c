#include<stdio.h>
int main(){
	int n,i,j,a,b,sum;
	while(~scanf("%d\n",&n)){
		sum=0;
		for(i=0;i<n;i++){
			b=0;
			for(j=0;j<3;j++){
				scanf("%d",&a);
				b+=a;
			}
			if(b>=2)sum++;
		}
		printf("%d\n",sum);
	}
	return 0;
}
