#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(arr[0]>25){
        cout<<"NO";
        return 0;
    }
    int collect = arr[0];
    for(int i=1;i<n;i++){

        if(arr[i]>25 && n==2){
             cout<<"NO";
            return 0;
        }

        else if(arr[i] - collect <= collect){
            cout<<collect<<endl;
            collect = collect + arr[i];
        }
        else{
            cout<<collect<<endl;
            cout<<"NO";
            return 0;
        }
    }

    cout<<"YES";
}
