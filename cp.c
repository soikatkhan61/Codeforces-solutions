#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        char s[n+1];
        scanf("%s",s);

        for(int i=0; i<n; i++)
        {

            if(s[i] == '?')
            {
                if(s[i] == '?' && n==1)
                {
                    s[i]= 'B';
                }
                else if(s[i] == '?' && i==0){
                    s[i] = 'B';
                }
                else if(s[i] == '?' && i==0 && (s[i-1] == 'B' || s[i+1] == 'B')){
                    s[i] = 'R';
                }
                else if(s[i] == '?' && i==0 && (s[i-1] == 'R' || s[i+1] == 'R')){
                    s[i] = 'B';
                }
                else  if(s[i-1] == 'B'  )
                {
                    s[i] = 'R';
                }
                else if(s[i-1] == 'R' )
                {
                    s[i]='B';
                }
            }

            else if(s[i-1] == 'B' && s[i+1] == 'B'){
                s[i]='R';
            }
            else if(s[i-1] == 'R' && s[i+1]== 'R'){
                s[i]='B';
            }

        }
        printf("%s\n",s);
    }
}
