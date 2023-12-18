/*
Myrica 有一个大小为 n×n 的木板，被等面积地划分为 n 
2
  个格子，她现在拥有 k 种颜色，可以给每个格子都涂上任意一种拥有的颜色。
对于一块木板，我们定义美丽值为行美丽值和列美丽值的和。
行美丽值是指所有行的不同数字的个数的最小值。
列美丽值是指所有列不同数字的个数的最小值。
例如如下木板涂色方案：

1	2
1	1
第一行的不同数字个数是2，第二行的不同数字数量是1，因此行美丽值为 min(2,1)=1 。
第一列的不同数字个数是1，第二列的不同数字数量是2，因此列美丽值为 min(1,2)=1 。
上图木板的美丽值为 1+1=2 。

现在，请你构造出一种涂色方案，让木板的美丽值最大。

输入格式:
有多组测试数据。
第一行输入一个整数 t 表示测试数据组数，对于每组测试数据：
一行输入两个整数 n,k 表示木板的大小和颜色数量。

输出格式:
每组数据输出一个 n 行 n 列的矩阵表示涂色方案，如果有多种方案，任意输出一种符合条件的答案即可。
*/
#include<stdio.h>
#define min(a,b) (a<=b)?a:b
int main(){
	int i,t;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		int n,k;
		scanf("%d %d",&n,&k);
		if(n==k){
			int p,q,j;
			for(p=1;p<=n;p++){
				j=p;
				for(q=0;q<n;q++){
					if(q==0)printf("%d",j);
					else printf(" %d",j);
					j=(j)%n+1;				
				}printf("\n");
			}//printf("\n");
		}
		else if(n<k){
			int p,q,j=1;
			for(p=1;p<=n;p++){
				j=p;
				for(q=0;q<n;q++){
					if(q==0)printf("%d",j);
					else printf(" %d",j);
					j=(j)%n+1;				
				}printf("\n");
			}//printf("\n");
		}
		else if(n>k){
			int p,q,j=1;
			for(p=1;p<=n;p++){
				if(n%2==0)j=j%k+1;
				for(q=0;q<n;q++){
					if(q==0)printf("%d",j);
					else printf(" %d",j);
					j=j%k+1;	
				}printf("\n");
			}//printf("\n");
		}
	}
	return 0;
}
