#include<stdio.h>
int main(){
	int i,repeat,p,sum,k,q;
	int num[100];
	char a[100],c;
	scanf("%d",&repeat);getchar();
	for(i=0;i<repeat;i++){
		p=0;q=0;sum=0;k=0;scanf("%c",&c);
		while((c)!=EOF&&c!='\n'){
			if(c=='+'||c=='-'||c=='*'||c=='/'||c=='='){
				if(c!='='){
					a[q]=c;q++;
				}
				num[p]=k;k=0;p++;
			}
			else if(c>='0'&&c<='9'){
				k=k*10+(c-'0');
			}
			scanf("%c",&c);
		}
		sum=num[0];
		for(i=0;i<q;i++){
			if(a[i]=='+')sum+=num[i+1];
			else if(a[i]=='-')sum-=num[i+1];
			else if(a[i]=='*')sum*=num[i+1];
			else if(a[i]=='/')sum/=num[i+1];
		}
		printf("%d\n",sum);
	}
	return 0;
}
