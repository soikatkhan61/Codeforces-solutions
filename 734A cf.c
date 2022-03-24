#include<stdio.h>
#include<string.h>
int main()
{
    int n,a=0,d=0;
    char s[100000];
    scanf("%d",&n);
    scanf("%s",s);

    int len = strlen(s);

    for(int i=0; i<len; i++){
        if(s[i] == 'A'){
            a++;
        }
        else{
            d++;
        }
    }

    if(a==d){
        printf("Friendship\n");
    }
    else if(a>d){
        printf("Anton\n");
    }
    else{
        printf("Danik\n");
    }

}
