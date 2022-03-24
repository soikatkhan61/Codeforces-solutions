#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int arr[n],sum=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum =  sum + arr[i];
        }
        if(sum == m){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
