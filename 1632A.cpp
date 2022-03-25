#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--){
        int n;
    scanf("%d",&n);
    char s[n];

    scanf("%s",s);

    if(n==1)
    {
        cout<<"YES"<<endl;
    }
    else if(n==2)
    {
        if((s[0] == '1' && s[1] == '1') || (s[0] == '0' && s[1] == '0'))
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    else
    {
        cout<<"NO"<<endl;
    }
    }

}
