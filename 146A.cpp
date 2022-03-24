#include<stdio.h>
int main()
{
    long long int n,a;
    scanf("%lld %lld",&n,&a);

    long long int cn=0,rem;
    long long int l,sum=0,f_sm;
    while(a!=0)
    {
        rem = a%10;
        printf("%lld ",rem);
        if(rem == 7 || rem == 4)
        {
            cn++;
            sum = sum + rem;
            if(cn == n/2)
            {
                f_sm = sum;
            }
        }


        l = a;
        a =  a/10;

    }
    int l_sm = sum - f_sm;

    printf("\n%lld %lld %lld\n",l_sm,f_sm,cn);

    if(cn==n)
    {

        if(f_sm/2 == l_sm/2)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
    else
    {
        printf("NO");
    }



}
