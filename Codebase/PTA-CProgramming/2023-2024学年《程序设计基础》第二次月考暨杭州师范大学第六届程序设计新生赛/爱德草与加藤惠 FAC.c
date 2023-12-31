/*
众所周知，爱德草和加藤惠是恩爱的模范情侣。
加藤惠买来 n 种不同的零食，第 i 种零食有一个价值 a 
i
​
  。由于加藤惠十分笨，她忘记了每一种零食的具体的价格。只知道它们满足如下条件：

零食的价值 a 
i
​
  (1≤i≤n) 在二进制下只有一位是 1。
所有的零食的价值满足 a 
1
​
 ≤a 
2
​
 ≤a 
3
​
 ≤⋯≤a 
n−1
​
 ≤a 
n
​
 。
加藤惠要把零食分配给两人，她用一个长度为 n 下标从 1 开始的01字符串 S 代表零食的分配。

如果 S 
i
​
  (1≤i≤n) 为 1 表示第 i 种零食被分给了加藤惠，反之则分给了爱德草。
我们记加藤惠得到的零食的价值之和为 X，记爱德草得到的零食的价值之和为 Y。
对于任意的价值序列 a，如果都满足 ∣X−Y∣≤a 
n
​
 ，那么此时这个分配方式会被认为是公平的。
现在爱德草想知道，加藤惠的分配是否是公平的。

输入格式:
有多组测试数据。

第一行输入一个整数 T 表示数据组数，对于每组测试数据：
第一行输入一个正整数 n 表示字符串的长度。
第二行输入一个长度为 n 的字符串 S，字符串仅包含数字 0 或者 1。

输出格式:
对于每个测试用例，输出一行。如果分配是公平的，则输出YES，反之则输出 NO。

输入样例:
6
1
1
2
00
4
1010
4
1100
6
010101
5
00001
输出样例:
YES
NO
YES
NO
YES
NO
说明/提示:
对于所有的数据：1≤t≤300，1≤n≤2000。
第一个样例中：显然任意的序列都可以使之成为一个公平的序列。
第二个样例中：[4,16] 显然是一个不公平的序列，因为一个人获得了 0 元，另一个人获得了 20 元, 20>16 ，所以输出 NO 。
第四个样例中：[1,1,4,16] 显然是一个不公平的数列，因为一个人获得了 2 元，另一个人获得了 20 元, 18>16 ，所以输出 NO 。
*/
#include<stdio.h>
#include<stdio.h>
int main(){
	int t,i,j;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		int n;scanf("%d",&n);
		char s[n];scanf("%s",&s);
		int k=0,jia=0,ai=0;
		for(j=0;j<n;j++){
			if(s[j]=='1'){
				jia+=pow(2,k);
				k++;
			}
			else if(s[j]=='0'){
				ai+=pow(2,k);
				k++;
			}
		}
		if(abs(jia-ai)<=pow(2,k-1)){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}return 0;
}
