#include<stdio.h>
#include<string.h>
int main()
{
    char s[101];
    char t[101];
    char rev_s[101];
    scanf("%s %s",s,t);

    int j = strlen(s)-1;

    for(int i=0; i<strlen(s);i++){
        rev_s[i] = s[j];
        j--;
    }

    int count=0;


    for(int i=0;i<strlen(s);i++){
        if(t[i] == rev_s[i]){
            count++;
        }
    }

    if(count == strlen(s)){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
}
