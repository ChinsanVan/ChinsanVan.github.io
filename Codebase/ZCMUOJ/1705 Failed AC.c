#include<stdio.h>
int main(){
	int i,j,m,n,c,k,flag=0;
	char a[100000];
	while((scanf("%s",&a))!=EOF){
		k=strlen(a);
		for(i=k;i>=1;i--){
			//k elements are divided into i groups,and every group is composed of c elements
			if(k%i==0)c=k/i;
			else continue;
			//to figure out whether the answer c is correct or not
			//every m and n is the corresponding elements of each group(n=m+c) (because each group is differed by c)
			for(m=0;m<k;m=m+c){
				for(n=m+c;n<k;n=n+c){
					if(a[m]==a[n])flag=1;
					else {
						flag=0;break;
					}
				}if(flag==0)break;
			}
			//if c is correct,output the key c
			if(flag==1){
				break;
			}
		}
		//output
		printf("%d\n",c);
	}
}
