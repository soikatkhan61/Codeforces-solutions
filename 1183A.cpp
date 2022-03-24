#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    bool flag = true;
    int ans = 0;
    while(flag)
    {
        int t = a;
        ans = 0;
        while(t)
        {
            ans += t%10;
            t/=10;
        }
        if(ans % 4 == 0)
            flag = false;
        else
            a++;
    }
    cout << a ;
    return 0;
}
