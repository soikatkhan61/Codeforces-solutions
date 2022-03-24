#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    int ans,flag=0,pos;
    if(arr[0]> 15)
    {
        ans = 15;
    }
    else
    {
        for(int i=1; i<n; i++)
        {
            if(arr[i] - arr[i-1] > 15){
                pos = i-1;
                flag=1;
                break;
            }
        }

        if(flag == 1){
            ans = arr[pos]+15;
        }
        else{
            ans = arr[n-1] + 15;
        }
    }

    if(ans > 90){
        printf("90");
    }else{
        printf("%d",ans);
    }


}
