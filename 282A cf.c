#include<stdio.h>
int main()
{
    int n,i, x=0;

    char s[100];
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%s",s);
        if (s[1] == '+')
        {
            x++;
        }
        else
        {
            x--;
        }
    }

    printf("%d\n",x);
    return 0;
}
