#include<stdio.h>
#include <string.h>
int main()
{
    char str_1[101];
    char str_2[101];
    scanf("%s",str_1);
    scanf("%s",str_2);
    //make all the letter convert to lowercase
    for(int i=0;i<=strlen(str_1);i++){
        if(str_1[i]>=65 && str_1[i]<=90){
            str_1[i]=str_1[i]+32;
        }

        if(str_2[i]>=65 && str_2[i]<=90){
            str_2[i]=str_2[i]+32;
        }
    }

    int result = strcmp(str_1,str_2);
    printf("%d\n",result);

}
