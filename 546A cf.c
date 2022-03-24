#include<stdio.h>
int main()
{
    int k,n,w,_$=0;
    scanf("%d %d %d",&k,&n,&w);

    for(int i=1; i<=w; i++){

        _$ = _$ + k*i;

    }
    int total = _$;
    if(total <= n ){
        printf("0\n");
    }
    else{
        printf("%d\n",total-n);
    }

}
