#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int x=0,y=0,z=0;

    while(n--){

        int data[4];

        for(int i=0;i<3;i++){
            scanf("%d",&data[i]);
        }
        x = x+data[0];
        y = y+data[1];
        z = z+data[2];

    }

   if((x==0 && y==0) && z==0){
    printf("YES");
   }else{
    printf("NO");
   }
}
