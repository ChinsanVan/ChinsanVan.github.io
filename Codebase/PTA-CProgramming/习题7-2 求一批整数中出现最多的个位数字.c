#include<stdio.h>
int main(){
	int i,n,c,times[10];scanf("%d",&n);int num[n];
	for(i=0;i<10;i++){times[i]=0;}
	for(i=0;i<n;i++){
		scanf("%d",&num[i]);c=num[i];//input
		if(c==0){times[0]++;}
		while(c>0){
			times[c%10]++;c/=10;//get the times of each number
		}
	}
	int max=0,m[10],k=0;
	for(i=0;i<10;i++){
		if(times[i]>=max){max=times[i];}
	}printf("%d: ",max);
	for(i=0;i<10;i++){
		if(times[i]==max){
			m[k]=i;k++;
		}
	}
	for(i=0;i<k;i++){
		if(i==0)printf("%d",m[i]);
		else printf(" %d",m[i]);
	}
	
	
	return 0;
}
