#include<stdio.h>
int main(){
	int i,j,m,n,c,k,flag=0;
	char a[100000];
	while((scanf("%s",a))!=EOF){
		k=strlen(a);flag=1;
		for(i=1;i<=k;i++){
			if(k%i==0){
				flag=1;
				for(j=i;j<k;j++){
					if(a[j]!=a[j-i])flag=0;
				} 
				//output
				if(flag==1){
					printf("%d\n",i);break;
				}
			}
		}
	}
	return 0; 
}
