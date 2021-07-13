#include<stdio.h>
int main()
{
    char word [101];
    scanf("%s",word);
    int len = strlen(word);
    int count = 0;
    for(int i=0; i<len; i++){

        if(word[i] >= 65 && word[i] <=90){
            count++;
        }
    }

    for(int i=0; i<len; i++){

        if(len-count < count ){
            if(word[i] >= 97 && word[i] <=122){
                word[i] = word[i] - 32;
            }
        }
        else{
            if(word[i] >= 65 && word[i] <=90){
                word[i] = word[i] + 32;
            }
        }
    }
    printf("%s\n",word);
}
