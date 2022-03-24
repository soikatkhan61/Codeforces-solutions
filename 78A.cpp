#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char s1[101];
    char s2[101];
    char s3[101];

    gets(s1);
    gets(s2);
    gets(s3);

    int len1 = strlen(s1);
    int len2 = strlen(s2);
    int len3 = strlen(s3);

    int _five=0;
    for(int i=0;i<len1;i++){
        if(s1[i] == 'a' || s1[i]== 'e' || s1[i] == 'i' || s1[i]== 'o'|| s1[i] == 'u'){
            _five++;
        }
    }

    int _seven=0;
    for(int i=0;i<len2;i++){
        if(s2[i] == 'a' || s2[i]== 'e' || s2[i] == 'i' || s2[i]== 'o' || s2[i] == 'u'){
            _seven++;
        }
    }

    int _fivee=0;
    for(int i=0;i<len3;i++){
        if(s3[i] == 'a' || s3[i]== 'e' || s3[i] == 'i' || s3[i]== 'o' || s3[i] == 'u'){
            _fivee++;
        }
    }

    if(_five == 5 && _seven == 7 && _fivee==5){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}
