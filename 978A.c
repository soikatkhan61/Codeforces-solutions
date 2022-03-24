#include<stdio.h>
int main()
{
    int n,m,i,j,a=0,b,ck=0;
    scanf("%d",&n);
    int arr[n];

    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr[i]==arr[j])
            {
                arr[i]=0;
            }
        }
    }
    for(i=0; i<n; i++)
    {
        if(arr[i]>0)
            ck++;
    }
    printf("%d\n", ck);
    for(i=0; i<n; i++)
    {
        if(arr[i]>0)
            printf("%d ", arr[i]);
    }

}
