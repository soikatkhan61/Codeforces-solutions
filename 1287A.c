#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);

    while(t--){
        int n;
        scanf("%d",&n);
        char a[n];
        scanf("%s",a);
        int ans=0;
        int k = -1;
        for(int i=0;i<n;i++){

            if(a[i] == 'P' && k > -1){
                if(ans > i-k){
                    ans = ans;
                }
                else{
                    ans = i-k;
                }
            }
            else if(a[i] == 'A'){
                k =i;
            }

        }
        printf("%d\n",ans);
    }
}
