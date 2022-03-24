#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);

    int side = sqrt(n);

    if(n/side == side){
       printf("%d",side*4);
    }
    else{
        printf("%d",2*n + 2);
    }

}
