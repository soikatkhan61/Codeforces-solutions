#include<stdio.h>
int main()
{
    int n,i,cnt=1;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        if(a[i]!=a[i+1])
            cnt++;
    }
    printf("%d\n",cnt);
    return 0;
}
