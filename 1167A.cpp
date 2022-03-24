#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        char s[n+1];
        scanf("%s",s);
        int trackIndexOf8=0;
        for(int i=0;i<n;i++){
            if(s[i] == '8'){
                trackIndexOf8 = i;
                break;
            }
        }

       if(s[0] == '8' && n >= 11){
            cout << "YES" << endl;
            continue;
        }

        int ext = n - trackIndexOf8;



        if(ext >= 11 && trackIndexOf8 > 0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }

    }
}
