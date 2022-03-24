#include<stdio.h>
int main()
{
    int k,r,i;
        scanf("%d%d",&k,&r);
        for(i=1;;i++){
            if(((k*i)-r)%10==0||(k*i)%10==0){
                printf("%d\n",i);
                break;
            }
        }
}
