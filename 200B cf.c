#include<stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    int p[n];

    for(int i=0;i<n;i++){
        scanf("%d",&p[i]);
        sum = sum+p[i];
    }

    double  result = (float)sum/n;

    printf("%lf\n",result);
}
