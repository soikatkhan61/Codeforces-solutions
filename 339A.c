#include<stdio.h>
int main()
{
    char s[10000];
    scanf("%s",s);

    for(int i=0;i<='\0';i=i+2){
        printf("%s\n",s);
    }
}
