#include<stdio.h>
int main(){
	int n,i,j;scanf("%d",&n);
	int array[n][n],maxh[n],minl[n];
	for(i=0;i<n;i++){maxh[i]=0;minl[i]=0;}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&array[i][j]);
			if(array[i][j]>=array[i][maxh[i]])maxh[i]=j;
			if(array[i][j]<=array[minl[j]][j])minl[j]=i;
		}
	}int flag=0;
	for(i=0;i<n;i++){
		int max=maxh[i];
		if(minl[max]==i){
			printf("%d %d",i,max);
			flag=1;
			break;
		}
	}
	if(flag==0)printf("NONE");
	return 0;
}
