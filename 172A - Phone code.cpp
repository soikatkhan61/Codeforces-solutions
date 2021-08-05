#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,cn=0;
    cin>>t;
    bool flag = true;

    string s[t];

    for(int i=0; i<t; i++)
    {
        cin>>s[i];
    }
    long long len = s[0].length();
    for(int i=0; i<len; i++)
    {
        for(int j=0; j<t-1; j++)
        {
            if(s[j][i] == s[j+1][i] )
            {
                continue;
            }
            else
            {
                flag = false;
                break;
            }

        }
        if(flag == true)
        {
            cn++;
        }
        else
        {
            break;
        }
    }

    cout<<cn;
}
