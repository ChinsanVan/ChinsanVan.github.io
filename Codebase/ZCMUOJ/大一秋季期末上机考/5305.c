#include<stdio.h>
int main(){
	int n,m;
	while(~scanf("%d %d",&n,&m)){
		if(n==0||m==0)break;
		//n stu;m gang
		if(m==n){
			printf("%d %d\n",m,0);
		}
		else{
			int a,b;//a yin;b yang;
			for(a=0;a<=n;a++){
				b=n-a;
				if(a+b*2==m)printf("%d %d\n",a,b);
			}
		}
	}
	return 0;
}

