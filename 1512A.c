#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);

    while(t--){
        int n,cn=0,flag=0;
        scanf("%d",&n);
        int a[n];

        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }

        for(int i=1;i<n;i++){
            if(a[0] == a[i]){
                cn++;
            }else{
                flag = i;
            }
        }
        //printf("%d %d\n",flag,cn);
        if(cn == n-2){
            printf("%d\n",flag+1);
        }else{
            printf("1\n");
        }
    }
}
