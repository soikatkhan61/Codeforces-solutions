#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int s,a,b,c;
    while(n--)
    {

        scanf("%d %d %d %d",&s,&a,&b,&c);

        long long int ans = s/c;
        ans = ans + (ans/a)*b;

        printf("%lld\n",ans);

    }

}
