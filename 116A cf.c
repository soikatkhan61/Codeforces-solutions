#include<stdio.h>
int main()
{
    int n,exit,enter,remain=0,max=0;
    scanf("%d",&n);

    while(n--){
      scanf("%d",&exit);
      scanf("%d",&enter);

      exit = remain - exit;
      remain = exit +  enter;

      if(max < remain){
        max = remain;
      }

    }
  printf("%d\n",max);

}
