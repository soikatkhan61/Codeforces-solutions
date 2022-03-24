#include<stdio.h>
#include<string.h>
int main()
{
    char name[100];
    scanf("%s",name);

    int len = strlen(name);
    int flag = 0,count=0;


    for(int i=0; i<len ; i++)
    {
        for(int j=0; j<i ; j++)
        {
            if(name[i] == name[j]){
                count++;
            }
        }

        if(count == 0){
            flag++;
        }
        count =0;

    }
    if(flag%2 == 0){
        printf("CHAT WITH HER!");
    }
    else{
        printf("IGNORE HIM!");
    }
}
