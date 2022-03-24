#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);

    while(t--){
        char s[10000],rev[10000];
        scanf("%s",s);

        int len = strlen(s);


        printf("%s",strrev(s));
    }
}
