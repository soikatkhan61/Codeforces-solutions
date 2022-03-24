#include<stdio.h>
#include<string.h>
int main()
{
    int n,k;
    scanf("%d",&n);
    char name[101];
    char a,b;

    while(n--){
        scanf("%s",name);
        int len = strlen(name);

        if(len<=10){
            printf("%s\n",name);
        }
        else{
           a = name[0];
           k= len-2;
           b= name[len-1];
         printf("%c%d%c\n",a,k,b);

        }
    }
}

