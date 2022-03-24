#include<stdio.h>
#include <stdlib.h>
int main()
{


        /* 2D array declaration*/
        int abc[5][5];
        /*Counter variables for the loop*/
        int i, j,track_i,track_j;
        for(i=0; i<5; i++)
        {
            for(j=0; j<5; j++)
            {
                scanf("%d", &abc[i][j]);
            }
        }


        for(i=0; i<5; i++)
        {
            for(j=0; j<5; j++)
            {
               if(abc[i][j] == 1){
                track_i = i;
                track_j = j;
                break;
               }
            }
        }


        int move_need = abs(2-track_i) + abs(2-track_j);
        printf("%d",move_need);


}
