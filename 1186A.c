#include<stdio.h>
int main()
{
    int m,n,k;
    scanf("%d %d %d",&n,&m,&k);

    if( m>=n && k>=n){
        printf("Yes");
    }else{
        printf("No");
    }
}
