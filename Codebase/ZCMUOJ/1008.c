#include<stdio.h>
int main(){
	int i,j,m,n,s1,s2;
	scanf("%d\n",&j);
	for(i=0;i<j;i++){
		scanf("%d %d",&s1,&s2);
		for(m=0;m<s1;m++){
			for(n=0;n<s1;n++){
				if(n==s1-1)printf("%d\n",s2);
				else printf("%d",s2);
			}
		}
		if(i!=j-1)printf("\n");
	}
	return 0;
}
