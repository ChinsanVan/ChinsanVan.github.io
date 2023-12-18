#include<stdio.h>
int main(){
	int t,p,q,i;scanf("%d\n",&t);
	for(i=0;i<t;i++){
		int n,r,flag=1;scanf("%d\n",&n);
		for(p=0;p<n;p++){
			for(q=0;q<n;q++){
				scanf("%d",&r);
				if(p>q&&r!=0)flag=0;
			}
		}
		if(flag==1)printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
