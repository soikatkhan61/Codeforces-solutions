#include<stdio.h>
int main()
{
    long long int n;
    scanf("%lld",&n);

    int rem,lucky=0;
    while(n != 0){

        rem = n%10;
        if(rem == 7 || rem == 4){
            lucky++;
        }
        n =n/10;
    }

    if(lucky == 4 || lucky == 7){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
}
