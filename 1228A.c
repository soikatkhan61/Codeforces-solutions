#include<stdio.h>
int main()
{
    int l,r,rem,k=0,ck=0,m,j,flag=0,track,cn=0;
    scanf("%d %d",&l,&r);
    int arr[k];
    for(int i=l; i<=r; i++)
    {
        int tmp = i;
        while(tmp!=0)
        {
            rem = tmp%10;
            arr[k]=rem;
            k++;
            tmp = tmp/10;
        }

        for(m=0; m<k; m++)
        {
            for( j=0; j<m; j++)
            {
                if(arr[m]==arr[j])
                {
                    break;
                }
            }
            if(m==j)
            {
                ck++;
            }
        }

        if(ck-flag == k){
            cn++;
            track = i;
            break;
        }

        flag = ck;
        k=0;
    }

    if(cn>0){
        printf("%d",track);
    }
    else{
        printf("-1");
    }

}
