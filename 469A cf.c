#include<stdio.h>
int main()
{
    int n,i,j,count=0,tmp;
    scanf("%d",&n);
    int p,q,x[250];
    scanf("%d",&p);

    for(i=0;i<p;i++){
        scanf("%d",&x[i]);
    }
    scanf("%d",&q);

    for(i=p;i<p+q;i++){
        scanf("%d",&x[i]);
    }

    //sort the array
    for(i=0; i<p+q; i++)
    {
        for(j=i+1; j<p+q; j++)
        {
            if(x[j] <x[i])
            {
                tmp = x[i];
                x[i] = x[j];
                x[j] = tmp;
            }
        }
    }


    for(i=0;i<p+q;i++){
        if(x[i] != x[i+1]){
            count++;
        }
    }


    if(count == n){
        printf("I become the guy.\n");
    }
    else{
        printf("Oh, my keyboard!\n");
    }
}
