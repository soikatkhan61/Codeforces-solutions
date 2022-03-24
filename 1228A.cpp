
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int main()
{
    int l,r,k,m,n;
    cin>>l>>r;
    for(int i=l; i<=r; i++)//Violence traverses all situations
    {
        int a[10]= {0};
        m=0;
        k=i;
        while(k>0)
        {
            a[k%10]++;
            if(a[k%10]>1)
            {
                m=1;
                break;
            }
            k/=10;
        }
        if(m==0)
        {
            cout<<i;
            break;
        }
    }
    if(m==1)
    {
        cout<<"-1";
    }
    return 0;
}
