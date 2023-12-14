#include<stdio.h>
#include <stdlib.h>

int main(){
	int k=0,num1[20],num2[20],p=0,q=0;
	char c;
	
	//input
	while((c=getchar())!='\n'){
		if(c!=32){
			k=k*10+(c-'0');
		}
		else if(c==32){
			num1[p]=k;p++;k=0;
		}
	}
	while((c=getchar())!='\n'){
		if(c!=32){
			k=k*10+(c-'0');
		}
		else if(c==32){
			num2[q]=k;q++;k=0;
		}
	}
	
	//例子输出 
	printf("%d",num1[2]);
	
	return 0;
}
