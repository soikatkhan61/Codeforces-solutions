#include<stdio.h>
int main()
{
    int x,step=0,rem;
    scanf("%d",&x);

    step = x/5;
    rem = x%5;
    if(rem>1 && rem<5){
        rem = 1;
    }
    printf("%d\n",step+rem);
}
