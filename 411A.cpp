#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char s[101];
    scanf("%s",s);

    int len=0,ll=0,sl=0,d=0;

    if(strlen(s)>=5){
        len=1;
    }
    for(int i=0;i<strlen(s);i++){
        if(s[i]=='0' || s[i]=='1' || s[i]=='2' ||s[i]=='3' ||s[i]=='4' ||s[i]=='5'
            ||s[i]=='6' ||s[i]=='7' ||s[i]=='8' ||s[i]=='9'){

            d=1;
        }

        else if(s[i]>=65 && s[i]<=90){
            ll=1;
        }

        else if(s[i]>=97 && s[i]<=122){
            sl=1;
        }

    }
    //cout<<len<<ll<<sl<<d<<sp;

    if(len+ll+sl+d>=4){
        cout<<"Correct";
    }
    else{
        cout<<"Too weak";
    }
}
