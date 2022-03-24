#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);

    while(n--){
        char s[1001];
        scanf("%s",s);

        int len = strlen(s);

        if(s[len-1]=='o'){
            printf("FILIPINO\n");
        }
        else if(s[len-1]=='u'){
            printf("JAPANESE\n");
        }
        else if(s[len-1]=='a'){
            printf("KOREAN\n");
        }
    }
}
