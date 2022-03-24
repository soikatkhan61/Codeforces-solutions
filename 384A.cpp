#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int temp=n;
    if(temp%2==1){
        int res = (temp/2)+1;

        cout<<(res*res)+(temp-res)*(temp-res)<<endl;
    }
    else{
        cout<<temp*(temp/2)<<endl;
    }
    int c=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i%2==1){
                if(j%2==1){
                    cout<<"C";
                    c++;
                }
                else{
                    cout<<".";
                }
            }
            else{
                if(j%2==1){
                    cout<<".";
                }
                else{
                    cout<<"C";
                    c++;
                }
            }
        }
        cout<<endl;
    }
    //cout<<c;
}
