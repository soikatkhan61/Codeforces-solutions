#include<iostream>
using namespace std;
int main()
{
    long long n,k;
    cin>>n>>k;

    long long arr[10000];

    int c=1;
    for(int i=1;i<=n/2;){
        if(n%2==0){
            if(n%i == 0){
                arr[c] = i;
                c++;
                i+=2;
            }
        }
        else{
           if(n%i == 0){
                arr[c] = i;
                c++;
                i=2*i + 1;
            }
        }
    }
    arr[c] = n;

    if(k > c){
        cout<<"-1";
    }
    else{
        cout<<arr[k];
    }

}
