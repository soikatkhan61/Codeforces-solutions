#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int x[n],y[m];

    for(int i=0;i<n;i++){
        scanf("%d",&x[i]);
    }
    for(int i=0;i<m;i++){
        scanf("%d",&y[i]);
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(x[i] == y[j]){
                printf("%d ",x[i]);
            }
        }
    }
}
