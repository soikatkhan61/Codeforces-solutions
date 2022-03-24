#include<stdio.h>
int main()
{
    int n,cn=0,flag=0;
    scanf("%d",&n);

    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2 == 0)
        {
            a[i] =-1;
            cn=1;
        }
    }
    flag =1;

    int dis[9];
    for(int i=0;i<n;i++){
        dis[a[i]] == cn++;
    }

    for(int i=0; i<10; i++)
    {


    printf("%d ",dis[i]);


    }
    printf("%d %d",flag,cn);
}
