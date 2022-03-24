#include<stdio.h>
int main()
{
    int c[4],cn=0,i,tmp;

    for( i=0;i<4;i++){
        scanf("%d",&c[i]);
    }

    for(i=0;i<4;i++){
        for(int j=i+1;j<4;j++){
            if(c[i]<c[j]){
                tmp = c[i];
                c[i] = c[j];
                c[j] = tmp;
            }
        }
    }

    for(i=0;i<3;i++){
        if(c[i] == c[i+1]){
            cn++;
        }
    }

    printf("%d",cn);


}
