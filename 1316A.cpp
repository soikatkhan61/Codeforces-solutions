
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        int a,b;
        cin>>a;
        int sum=a;
        for(int i=1;i<n;i++)
        {
            cin>>b;
            sum+=b;
        }
        if(sum<=m)
            cout<<sum<<endl;
                 else
            cout<<m<<endl;
    }
    return 0;
}
