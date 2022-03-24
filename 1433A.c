
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--){
        int n,rem,cn;
        cin>>n;

        rem = n%10;

        int p = 10*(rem-1);


        while(n!=0){
            rem = n%10;
            n = n/10;
            cn++;
        }
        cout
    }
}
