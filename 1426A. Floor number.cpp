#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--){
        int n,x;
        cin>>n>>x;
        int cnt=0;
        for(int i=2;;i=i+x){
            cnt++;
            if(i>=n){
                break;
            }
        }
        cout<<cnt<<endl;
    }
}
