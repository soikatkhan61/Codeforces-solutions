#include<stdio.h>
int main()
{
    int n,s;
    scanf("%d %d",&n,&s);

    int div = s/n;
    int rem =  s%n;

    if(rem>0){
        div = div +1;
    }

    printf("%d",div);
}
