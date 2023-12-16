#include<stdio.h>
int main(){
	char s[101]={},c;char* p=s;int flag,k=0,i,j;
	while((scanf("%s",&s))!=EOF){
		flag=0;
		k=strlen(s);
		for(i=0;i<k;i++){
			j=k-i-1;
			if(s[i]==s[j])flag=0;
			else {
				flag=1;break;
			}
		}
		if(flag==0)printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
