#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    char op[n+1];
    scanf("%s",&op);
    char gp[n+1];
    scanf("%s",&gp);

    int cn=0,x;
    for(int i=0; i<n; i++)
    {
        if( x = abs(op[i] - gp[i]) <= 5)
        {
            cn = cn + abs(op[i] - gp[i]);
        }
        else
        {
            if(op[i]<gp[i])
            {
                cn = cn + op[i] - abs(10-gp[i]);
            }
            else if(op[i]>gp[i])
            {
                cn = cn + gp[i] - abs(10-op[i]);
            }
        }
    }
    printf("%d",cn);
}
