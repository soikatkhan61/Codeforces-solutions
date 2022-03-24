#include<stdio.h>
int main()
{
    int n,s[5],final_1,final_2,loser_1,loser_2;
    scanf("%d",&n);

    while(n--){

        for(int i=0; i<=3; i++){
            scanf("%d",&s[i]);
        }

        if(s[0] > s[1]){
            final_1 = s[0];
            loser_1 = s[1];
        }else{
            final_1= s[1];
            loser_1 = s[0];
        }

        if(s[2] > s[3]){
            final_2 = s[2];
            loser_2 = s[3];
        }
        else{
            final_2 = s[3];
            loser_2 = s[2];
        }
        if((final_1 > loser_1 && final_1 > loser_2) && (final_2 > loser_1 && final_2 > loser_2)){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }

}
