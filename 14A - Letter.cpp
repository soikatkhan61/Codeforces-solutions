#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;

    int i,j;
    char s[51][51];
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            cin>>s[i][j];
        }
    }
    
    int  mn_i=n,mx_i=-1,mx_j=-1,mn_j=m;

    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            if(s[i][j]=='*')
            {
                if(i<mn_i)
                    mn_i=i;
                if(i>mx_i)
                    mx_i=i;
                if(j<mn_j)
                    mn_j=j;
                if(j>mx_j)
                    mx_j=j;
            }
        }

    }

    for(i=mn_i; i<=mx_i; i++)
    {
        for(j=mn_j; j<=mx_j; j++)
        {
            cout<<s[i][j];
        }
        cout<<endl;
    }
    
    
}
