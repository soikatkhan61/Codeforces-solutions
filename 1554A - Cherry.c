#include<stdio.h>
int main()
{
  long long t;
  scanf("%lld",&t);
  while(t--)
  {
    long long n,a[1000000],i,m,maxx=0;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
      scanf("%lld",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
      m=a[i]*a[i+1];
      if(m>maxx)
      {
        maxx=m;
      }
    }
    printf("%lld\n",maxx);
  }
}
