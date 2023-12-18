#include<stdio.h>
#include<stdlib.h>
int main(){
	char s[101],i;
	while(scanf("%s",&s)!=EOF){
		int times[26],sum=0;
		for(i=0;i<26;i++){
			times[i]=0;
		}
		int n=sizeof(s)/sizeof(s[0]);
		for(i=0;i<n;i++){
			if(times[s[i]-'a']==0)times[s[i]-'a']=1;
		}
		for(i=0;i<26;i++){
			sum+=times[i];
		}
		if(sum%2==1)printf("IGNORE HIM!\n");
		//else if(sum==1)printf("CHAT WITH HER!\n");
		else printf("CHAT WITH HER!\n");
	}
	return 0;
}
