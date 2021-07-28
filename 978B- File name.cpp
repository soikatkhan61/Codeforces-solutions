#include<iostream>
#include<string>
using namespace std;
int main()
{
	//freopen("in.txt", "r", stdin);

	int i,j,k;
	int n,m;
	string s;

	cin>>n;
	cin>>s;

	m=0;
	for(i=0;i<n;i++)
    {
        if(i+2<=n-1)
        {
            if(s[i]=='x' && s[i+1]=='x' && s[i+2]=='x')
            {
                m++;
            }
        }
    }

    cout<<m;

	return 0;
}
