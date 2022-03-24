#include<iostream>
#include<math.h>
using namespace std;

int isPerfectSquare(int x)
{
    int s = (int)sqrt(x);
    return (s*s == x);
}
int isFibonacci(int x)
{
    return isPerfectSquare(5*x*x + 4) ||
           isPerfectSquare(5*x*x - 4);
}

int main()
{
    int n;
    cin>>n;

    if (n>0)
    {
        for(int i=1;i<=n;i++){

            if(isFibonacci(i)==1){
                cout<<"O";
            }
            else{
                cout<<"o";
            }
        }

    }
}
