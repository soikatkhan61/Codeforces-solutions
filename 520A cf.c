
#include<stdio.h>
#include<string.h>
int main()
{

      int i,n,m;
        while(scanf("%d",&n)){
            m=n;
            for(i=1;i<n;i++){

                if(m<=i)
                break;
                m=m-i;

            }
        printf("%d\n",m);
    }
    return 0;
}
