#include<stdio.h>
int main()
{
    int n,p,c,cn=0;
    scanf("%d",&n);

    while(n--){
        scanf("%d %d",&p,&c);

        if(p<c-1){
            cn++;
        }
    }
    printf("%d\n",cn);
}
