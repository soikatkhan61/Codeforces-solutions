#include<stdio.h>
int main()
{
    int n,h,flag=0;
    scanf("%d %d",&n,&h);
    int a[n];

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i] > h){
            flag++;
        }
    }

    printf("%d\n",flag*2 + (n-flag));


}
