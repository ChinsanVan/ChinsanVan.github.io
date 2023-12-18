/*
Toyyu学姐有一个长方体状的木箱，木箱的底板从左到右依次叠放了一些小木块，她根据从左到右的顺序记录下来了这几列小木块的高度（每个小木块的高度为 1）。
现在她觉得此做法可玩性太低，便将木箱顺时针翻转了 90 
∘
 ，小木块们在重力的因素下竖直下落，重新叠放成了几列新的小木块柱。
Toyyu学姐不想再一列列数小木块们的高度了，请你写一段程序帮帮她，输出顺时针翻转 90 
∘
  后的每列小木块柱的高度。

输入格式:
每个测试文件仅有一组测试数据。
第一行一个整数 n，代表初始时木箱底板上放了n 列小木块柱。
第二行输入 n 个整数 a 
1
​
 ,a 
2
​
 ,…,a 
n
​
  ，其中 a 
i
​
  代表初始时第 i 列小木块柱的高度。

输出格式:
输出两行。
第一行输出顺时针翻转 90 
∘
  后新的小木块的列数 m。
第二行输出 m 个 整数。依次输出翻转后新的每列小木块柱的高度。
*/

#include<stdio.h>
int main(){
	int i,j,n;scanf("%d",&n);
	int list[n],max=-9999;
	for(i=0;i<n;i++){
		scanf("%d",&list[i]);
		if(list[i]>=max)max=list[i];
	}
	int out[max];
	for(i=0;i<max;i++){
		out[i]=0;
	}
	for(i=0;i<n;i++){
		
		for(j=0;j<list[i];j++){
			out[j]++;
		}/*
		for(j=0;j<n;j++){
			if(list[j]>0){
				list[j]--;
				out[i]++;
			}
		}*/
	}
	
	
	printf("%d\n",max);
	for(i=0;i<max;i++){
		if(i==0)printf("%d",out[i]);
		else printf(" %d",out[i]);
	}
	
	/*
	int in[n][max],out[max];
	for(i=0;i<n;i++){
		for(j=0;j<list[i];j++){
			in[i][j]=1;
		}
	}
	for(j=0;j<max;j++){
		for(i=0;i<n;i++){
			out[j]+=in[i][j];
		}
	}
	for(i=0;i<max;i++){
		if(i==0)printf("%d",out[i]);
		else printf(" %d",out[i]);
	}*/
	
	return 0;
}
