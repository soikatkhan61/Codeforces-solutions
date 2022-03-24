#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;

    int ans=0,n;
    n= s.size();

    int i,j,k;

    for(int i=0;i<n;i++)
        for(j=i+1;j<n;j++)
            for(k=j+1;k<n;k++)
                if(s[i] == 'Q' && s[j] == 'A' && s[k] == 'Q' )
                    ans++;

    cout<<ans;
}
