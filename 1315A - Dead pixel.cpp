#include<bits/stdc++.h>
#define ll long long
using namespace std;

int a,b,x,y;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d%d%d",&a,&b,&x,&y);
		int s1=a*y;
		int s2=b*x;
		int s3=a*(b-y-1);
		int s4=b*(a-x-1);
		cout<<max(max(s1,s2),max(s3,s4))<<endl;
	}
	return 0;
}
