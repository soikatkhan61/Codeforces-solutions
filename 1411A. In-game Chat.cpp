#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >>n;
        char s[n+1];
        cin >>s;
        int cn=0;
        for(int i=strlen(s)-1;i>=0;i--){
            if(s[i]==')'){
                cn++;
            }
            else{
                break;
            }
        }
        if(cn <= strlen(s)-cn){
            cout <<"No"<<endl;
        }
        else{
            cout <<"Yes"<<endl;
        }
    }
}
