#include<stdio.h>
#include<string.h>
int main()
{
    char s[10000000];
    scanf("%s",s);

    int len = strlen(s);
    int cn=1,flag=0,loopRun=0;
    int j_cnt = 0;
    for(int i=0;i<len;i++){
        if(s[i] == '4'){
            for(int j=i+1;loopRun == 0;j++){
                if(s[j] == '4'){
                    cn++;
                    j_cnt++;
                }
                else{
                    break;
                }
            }
            //printf("%d ",loopRun);

        }
        if(j_cnt == 2){
                loopRun = 1;
            }

        if(s[i] != '4' && s[i]!= '1'){
            flag = 1;
        }
        if(s[0] == '4'){
            flag=1;
        }
    }
    //printf("%d %d\n",flag,cn);
    if(cn>=3){
        printf("NO");
    }
    else if(cn>=3 && loopRun == 1){
        printf("YES");
    }
    else if(cn>=3 || flag == 1 ){
         printf("NO");
    }
    else{
        printf("YES");
    }
}
