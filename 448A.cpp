#include<iostream>
using namespace std;
int main()
{
    int a[3],b[3],n,sum_a=0,sum_b=0;
    int ab = 0;
    for(int i=0;i<3;i++){
        cin>>a[i];
        sum_a = sum_a + a[i];
        if(a[i] == 0){
            ab= 1;
        }
    }
    for(int i=0;i<3;i++){
        cin>>b[i];
        sum_b = sum_b + b[i];
    }
    cin>>n;

    while (n-- && (sum_a > 0 || sum_b > 0)) {
        if (sum_a > 0) {
            sum_a -= 5;
        } else if (sum_b > 0) {
            sum_b -= 10;
        }
    }


    if(sum_a <=0 && sum_b <=0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}
