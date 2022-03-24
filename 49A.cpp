
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
   char s[101];
   scanf("%s",s);

   int len = strlen(s);

   char a[13]={'a','e','i','o','u','y','A','E','I','O','U','Y'};

    cout<<s[len-2]<<endl;
   for(int i=0;i<12;i++){
    if(a[i] == s[len-2]){
        cout<<"YES";
        return 0;
    }
    else{
        cout<<"NO";
        return 0;
    }
   }
}
