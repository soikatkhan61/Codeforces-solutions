#include<stdio.h>
int main()
{
    int n,cn=0,k=0;
    scanf("%d",&n);
    int a[n],ans[n];

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[0] == a[i]){
           cn++;
        }
    }

    printf("%d\n",cn);


  for(int i=0;i<n;i++){

        if(a[0] == a[i]){
          k++;
        if(k > 1){
            printf("%d ",a[i-1]);
        }
        }
    }

    printf("%d",a[n-1]);

}
