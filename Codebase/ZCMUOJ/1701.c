#include<stdio.h>
int main(){
	int n,i;//scanf("%d",&n);
	//int a[n];
	while((scanf("%d",&n))!=EOF){
		int a[n],sum=0;
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
			sum+=a[i]%(i+1);
		}
		printf("%d\n",sum);
	}
	return 0;
}
