/*
众所周知，XCPC 比赛中的题目难度与题号顺序没有必然联系，因此常常会出现看到排行榜某道签到题都被其他队切穿了然后才急急忙忙过去读题的情况，由此也可能造成比赛体验的下降。
在准备新生赛题目的过程中，善解人意的学长学姐们特意准备了七道大水题，即比较简单的题。
面对一份难度乱序的题单，为了让大家在新生赛中能体验好一点，七道大水题 将全部放在最前面，并且按难度升序排列。
新生赛即将开始，在同学们的激励下，通过不断地努力终于加入了杭州师范大学 ACM 程序设计竞赛实验室的小琛同学为了感谢同学们的帮助，特意设计了带标语的 KT 板，因为经费不足 qwq，KT 板的长度只能刚好容下标语。
同学们可以举起 KT 板，在相机中留下自己的身影，以此来纪念自己的新生赛之旅，难过的是由于相机出了状况，被双手举起的
KT 板在相片中消失了，小琛同学还记得标语的内容为"A single spark could start a prairie fire."，你能帮忙补齐缺失的部分吗？

输入格式:
本题无输入。

输出格式:
输出有三行，形成双手举起的带标语的 KT 板,行尾不要多余的空格。

输入样例:
No Input
输出样例:
    __________________________________________
 /)|A single spark could start a prairie fire.|(\
// |__________________________________________| \\
*/
#include<stdio.h>
#include<math.h>
//#define f(x) pow(x,2)-x+5
//#define g(x) 2*pow(x,2)+x-3
int main(){
	int x,i,j,num[20];
	scanf("%d",&x);
	
	long long a,b,c,d;
	//a=(f(g(f(x)-x))+g(x));
	a=pow(x,2)-x+5-x;
	b=2*pow(a,2)+a-3;
	c=pow(b,2)-b+5;
	d=c+2*pow(x,2)+x-3;
	/*
	for(i=0;a>0;i++){
		num[i]=a%10;
		a=a/10;
	}
	for(j=i-1;j>=0;j--){
		printf("%d",num[j]);
	}*/
	printf("%lld",d);
	return 0;
}

int f(long long x){
	return (pow(x,2)-x+5);
}
int g(long long x){
	return (2*pow(x,2)+x-3);
}

