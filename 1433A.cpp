
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--){
        int n,rem,cn=0;
        cin>>n;

        rem = n%10;

        int p = 10*(rem-1);


        while(rem!=0){
            cn++;
            rem = n%10;
            n = n/10;
        }
        int m;
        cn =cn -1;

        if(cn==1){
            m=1;
        }
        else if(cn==2){
            m=3;
        }
        else if(cn==3){
            m=6;
        }
        else if(cn==4){
            m=10;
        }

        cout <<p+m<<endl;
    }
}
