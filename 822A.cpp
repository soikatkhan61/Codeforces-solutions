#include<iostream>
using namespace std;
int main()
{
    int x,y,f;
    cin>>x>>y;

    int p = min(x,y);
    f=1;

    while(p>0){
        f*=p;
        p--;
    }

    cout<<f;

}
