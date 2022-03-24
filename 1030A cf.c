#include<stdio.h>
int main()
{
    int n,cn=0;
    scanf("%d",&n);
    int a[n];

    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
        if(a[i] == 0){
            cn++;
        }
    }

    if(cn == n){
        printf("EASY\n");
    }
    else{
        printf("HARD\n");
    }

}
