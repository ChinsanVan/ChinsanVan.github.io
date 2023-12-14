#include<stdio.h>
#include <stdlib.h>

int main(){
	int n,i,j,tmp;scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	//sort选择排序初步
	for(i=0;i<n;i++){
		for(j=i;j<n;j++){
			if(a[i]<a[j]){
				tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
			}
		}
	}for(i=0;i<n;i++){
		if(i==0)printf("%d",a[i]);
		else printf(" %d",a[i]);
	}
	
	return 0;
}
