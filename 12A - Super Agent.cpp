
#include<iostream>
using namespace std;
int main()
{
    char s[51][51];
    int i,j;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            cin>>s[i][j];
        }
    }

    int cn=0;


    if((s[0][1] == '.' && s[2][1]=='.') || (s[0][1] == 'X' && s[2][1]=='X')){
        cn++;
    }
    if((s[1][0] == '.' && s[1][2]=='.') || (s[1][0] == 'X' && s[1][2]=='X')){
        cn++;
    }
    if((s[0][0] == '.' && s[2][2]=='.') || (s[0][0] == 'X' && s[2][2]=='X')){
        cn++;
    }
    if((s[0][2] == '.' && s[2][0]=='.') || (s[0][2] == 'X' && s[2][0]=='X')){
        cn++;
    }

    //cout<<cn<<endl;
    if(cn==4){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}
