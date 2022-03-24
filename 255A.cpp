#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int _ch=0,_bi=0,_bc=0;
    for(int i=1;i<=n;i++){
        cin>>arr[i];

        if(i%3 == 1){
            _ch = _ch + arr[i];
        }
        else if(i%3 == 2){
           _bi = _bi + arr[i];
        }
        else if(i%3 == 0){
            _bc = _bc + arr[i];
        }
    }

    int maxx = max(max(_ch,_bi) , _bc);

    if(maxx == _ch){
        cout<<"chest";
    }
    else if(maxx == _bi){
        cout<<"biceps";
    }
    else if(maxx == _bc){
        cout<<"back";
    }

}
