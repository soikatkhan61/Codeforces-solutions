#include<stdio.h>
int main()
{
    int t , n, s;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&n,&s);
        printf("%d\n",s/((n/2)+1));
    }
}
