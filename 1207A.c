#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int b,p,f;
    int h,c;

    while(t--){
      scanf("%d %d %d",&b,&p,&f);
      scanf("%d %d",&h,&c);

      if(p*2 + f*2 <= b){
        printf("%d\n",h*p+c*f);
      }
      else{

        if(b<2){
            printf("0\n");
        }

        else if(c>h){
            int left_buns = b - f*2;
            int h_b = left_buns/2;

            printf("%d\n",c*f + h_b*h);
        }

        else{
            int left_buns = b - p*2;
            int c_b = left_buns/2;

           printf("%d\n",p*f + c_b*h);
        }
      }
    }


}
