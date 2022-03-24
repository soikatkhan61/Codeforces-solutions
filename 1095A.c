#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    char s[n+1];

    scanf("%s",s);
    int k=0;
    for(int i=1;s[k]!='\0';i++){
        printf("%c",s[k]);
        k = k+i;
    }
}
