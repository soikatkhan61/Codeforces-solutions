#include<stdio.h>
int main()
{
    int n,_0=0,_5=0;
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);

        if(arr[i] == 0){
            _0++;
        }
        else{
            _5++;
        }
    }

    if(_0 == 0){
        printf("-1");
    }
    else if(_5 < 9){
        printf("0");
    }
    else{
        _5 -= _5 % 9;
        for (int i = 0; i < _5; i++)
            printf("5");
        for (int i = 0; i < _0; i++)
           printf("0");
    }


}
