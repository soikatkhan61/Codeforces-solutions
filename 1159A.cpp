#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    int n;
    char a;
    cin >> n ;
    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> a;
        if(a == '+')
            ans++;
        else if(ans > 0)
            ans--;
    }
    cout << max(ans,0) << endl;
    return 0;
}
