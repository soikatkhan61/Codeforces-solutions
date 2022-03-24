#include<stdio.h>

int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    char s[27] = "abcdefghijklmnopqrstuvwxyz";
    for(int i=0;i<n;i++){
        printf("%c",s[i%k]);
    }
}
