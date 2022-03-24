#include<stdio.h>
int main()
{
    int a[4],i,j,temp;
    for(i=0;i<4;i++){
        scanf("%d",&a[i]);
    }

    for(i=1;i<3;i++){
        for(j=i+1;j<4;j++){
            if(a[i] > a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    if(a[0]%a[1] == 0){
        printf("%d",a[0]/a[1]);
    }
    else{
        for(i=1;i<4;i++){
            for(j=i+1;j<3;j++){
                if(a[0]%(a[i] + a[j])){

                }
            }

        }

    }


}
