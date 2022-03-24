#include<stdio.h>
#include<string.h>
int main()
{
    int flag=0,temp,i,j;
    char name[1005],pos[1005];
    gets(name);

    for (i = 0; i < strlen(name)-1; i++) {
      for (j = i+1; j < strlen(name); j++) {
         if (name[i] > name[j]) {
            temp = name[i];
            name[i] = name[j];
            name[j] = temp;
         }
      }
   }

    for( i=0;i<strlen(name);i++){

        if(name[i]>= 97 && name[i]<= 122){
            flag++;
            if(name[i] == name[i+1]){
             flag--;
            }

        }



    }

    printf("%d\n",flag);

}
