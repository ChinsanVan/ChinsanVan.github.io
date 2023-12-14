#include <stdio.h>
int main() {
    int n, m, i, j, flag,cnt=0;
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)scanf("%d", &a[i]);
    scanf("%d", &m);
    int b[m];
    int s[m+n];
    for (j = 0; j < m; j++)scanf("%d", &b[j]);
    for (i = 0; i < n; i++) {
        flag = 0;
        for (j = 0; j < m; j++) {
            if (a[i] == b[j]) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
                s[cnt]=a[i];
                cnt++;
        }
    }
    for (j = 0; j < m; j++) {
        flag = 0;
        for (i = 0; i < n; i++) {
            if (a[i] == b[j]) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            s[cnt]=b[j];
            cnt++;
        }
    }
    printf("%d",s[0]);
    for(i=1;i<cnt;i++){
        flag=0;
        for(j=0;j<i;j++){
            if(s[i]==s[j]){
                flag=1;
                break;
            }
        }
        if(flag==0)printf(" %d",s[i]);
    }
    return 0;
}
