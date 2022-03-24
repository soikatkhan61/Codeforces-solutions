#include<stdio.h>
#include<string.h>

int main()
{
    int n,m;
    scanf("%d %d",&n,&m);

    char arr[n][11];
    char arr2[m][11];

    for(int i=0;i<n;i++){
        scanf("%s",&arr[i]);
    }

    for(int i=0;i<m;i++){
        scanf("%s",&arr2[i]);
    }


    int q;
    scanf("%d",&q);

    while(q--){
        int d;
        scanf("%d",&d);

        if(d<=n && d<=m){
            //printf("ami ekhane");
            printf("%s%s\n",arr[d-1],arr2[d-1]);
        }
        else if(d<=n && d>m){
           // printf("ami ekhane2\n");
            int rem = d%m;
            if(rem==0){
                printf("%s%s\n",arr[d-1],arr2[m]);
            }
            else{
                printf("%s%s\n",arr[d-1],arr2[rem-1]);
            }

        }
        else if(d>n && d<=m){
            //printf("ami ekhane3");
            int rem = d%n;
            if(rem==0){
                printf("%s%s\n",arr[n],arr2[d-1]);
            }
            else{
                printf("%s%s\n",arr[rem-1],arr2[d-1]);
            }
        }
        else{
            //printf("ami ekhane4");
            int rem = d%n;
            int remm= d%m;
          //  printf("%d %d\n",rem,remm);
            if(d<=m){
                if(rem == 0){
                    printf("%s%s\n",arr[n-1],arr2[d-1]);
                }
                else{
                printf("%s%s\n",arr[rem-1],arr2[d-1]);
                }
            }
            else{
                if(remm ==0 && rem == 0){
                    printf("%s%s\n",arr[n-1],arr2[m-1]);
                }

                else if(remm ==0){
                    printf("%s%s\n",arr[rem-1],arr2[m-1]);
                }
                else if(rem==0){
                    printf("%s%s\n",arr[n-1],arr2[remm-1]);
                }
                else{
                     printf("%s%s\n",arr[rem-1],arr2[remm-1]);
                }

            }

        }
    }



}
