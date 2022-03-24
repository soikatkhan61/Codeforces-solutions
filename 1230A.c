#include<stdio.h>
int main()
{
    int a[4];
    for(int i=0;i<4;i++){
        scanf("%d",&a[i]);
    }

    if(a[0]+a[1] == a[2]+a[3]){
        printf("YES");
    }
    else if(a[0]+a[2] == a[1]+a[3]){
        printf("YES");
    }
    else if(a[1]+a[2] == a[0]+a[3]){
        printf("YES");
    }



    else if(a[0]-a[1] == a[2]+a[3]){
        printf("YES");
    }

    else if(a[0]-a[2] == a[1]+a[3]){
        printf("YES");
    }

    else if(a[0]-a[3] == a[1]+a[2]){
        printf("YES");
    }



    else if(a[1]-a[0] == a[2]+a[3]){
        printf("YES");
    }

    else if(a[1]-a[2] == a[0]+a[3]){
        printf("YES");
    }

    else if(a[1]-a[3] == a[0]+a[2]){
        printf("YES");
    }


    else if(a[2]-a[0] == a[1]+a[3]){
        printf("YES");
    }

    else if(a[2]-a[1] == a[0]+a[3]){
        printf("YES");
    }

    else if(a[2]-a[3] == a[0]+a[1]){
        printf("YES");
    }


    else if(a[3]-a[0] == a[2]+a[1]){
        printf("YES");
    }

    else if(a[3]-a[2] == a[0]+a[1]){
        printf("YES");
    }

    else if(a[3]-a[1] == a[0]+a[2]){
        printf("YES");
    }

    else{
        printf("NO");
    }

}
