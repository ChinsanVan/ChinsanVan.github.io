#include<stdio.h>
int main(){
	int r,i;scanf("%d\n",&r);
	for(i=0;i<r;i++){
		char n;int l=0,b=0,d=0,o=0;
		while((n=getchar())!='\n'&&n!=EOF){
			if(n==32)b++;
			else if(n>='0'&&n<='9')d++;
			else if(n>='a'&&n<='z'||n>='A'&&n<='Z')l++;
			else o++;
		}
		printf("letter=%d,blank=%d,digit=%d,other=%d\n",l,b,d,o);
	}return 0;
}
