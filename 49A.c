
#include<stdio.h>
#include<string.h>

int main()
{
   char s[101];
   gets(s);

   //finding last character
   int last = strlen(s)-2;
   //if last == space then go back
   while(s[last] == 32){
        last--;
   }

   //printf("%c %d\n",s[last],last);

   char a[13]={"aeiouyAEIOUY"};
   int flag;
   for(int i=0;i<12;i++){
    if(a[i] == s[last]){
       flag=1;
        break;
    }
    //printf("%c ",a[i]);
   }
  // printf("%d\n",flag);
   if(flag==1){
    printf("YES");
   }
   else{
    printf("NO");
   }
}
