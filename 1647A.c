#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,i;
    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n);

        if(n%3 == 0 || n%3 == 2)
        {
            i=2;
            while(n>0)
            {
                printf("%d",i);
                n=n-i;
                i=3-i;
            }
        }
        else
        {
            i=1;
            while(n>0)
            {
                printf("%d",i);
                n=n-i;
                i=3-i;
            }
        }
        printf("\n");
    }
}
