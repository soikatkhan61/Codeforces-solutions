#include<iostream>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);

    while(t--){
        int p;
        scanf("%d",&p);
        int c=1;
        int flag=0;
        for(int i=1;i<=p;i++){
            for(int j=2;j<=p;j++){
                if(p%j==c && j>=2){
                   printf("%d ",j);
                    flag++;
                }

                if(flag==2 ){

                    break;
                }
            }
            c++;
        }
        //cout<<flag<<c;
        flag=0,c=2;
    }
}
