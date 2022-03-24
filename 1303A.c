#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);

    char s[101];

    while(n--){
        scanf("%s",s);


        int l=0,r=strlen(s)-1,ans=0;

        while(l<=r&&s[l]=='0') ++l;

        while(r>=l&&s[r]=='0') --r;

        for(int i=l;i<=r;i++) ans+=(s[i]=='0');

        printf("%d\n",ans);
    }
}
