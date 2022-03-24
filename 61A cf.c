#include<stdio.h>
#include<string.h>
int main()
{
    char num1[100];
    char num2[100];
    char ans[100];
    int i,len1,len2;
    scanf("%s %s",num1,num2);

    len1 = strlen(num1);
    len2 = strlen(num2);

    if(len1 != len2){
        return 0;
    }

    for(i=0;i<len1;i++){
        if(num1[i] == num2[i]){
            printf("0");
        }
        else{
            printf("1");
        }
    }
}
