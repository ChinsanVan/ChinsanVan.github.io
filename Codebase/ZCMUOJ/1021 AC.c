
#include <stdio.h>
#include <string.h>
char k[105];
int main()
{
    int cnt=0,shifou=0,s=0,i=0;
    unsigned long l;
    while(~scanf("%s",k)){
        l=strlen(k);
        for(i=1;i<l;i++){
            for(s=0;s<i;s++){
                if(k[i]==k[s]){
                    shifou=1;       //shifou表示是否有一样的字符
                    break;
                }
            }
            if(shifou==0) cnt++;
            shifou=0;
        }
        if(cnt%2==0) printf("IGNORE HIM!\n");
        if(cnt%2==1) printf("CHAT WITH HER!\n");
        cnt=0;
    }
    return 0;

————————————————
版权声明：本文为CSDN博主「Everglow_tsk」的原创文章，遵循CC 4.0 BY-SA版权协议，转载请附上原文出处链接及本声明。
原文链接：https://blog.csdn.net/weixin_74430248/article/details/128242026
