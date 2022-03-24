#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    printf("............\n");
    printf("Black: B\n");
    printf("Brown: br\n");
    printf("Red: R\n");
    printf("Orange: O\n");
    printf("Yellow: Y\n");
    printf("Green: G\n");
    printf("Blue: bl\n");
    printf("Violet: V\n");
    printf("Grey: gr\n");
    printf("White: W\n");
    printf("Gold: gl\n");
    printf("Silver: S\n");
    printf("............\n\n");


    int n,i;
    printf("Number of Band: ");
    scanf("%d",&n);
    int sum[n];
    float m,t;

    char cl[n+1];

    for(i=0; i<n-2; i++)
    {
        printf("color band %d: ",i+1);
        scanf("%s",cl);

        if(cl[0] == 'b' && cl[1] == 'r' )
        {
            sum[i] = 1;
        }
        else if(cl[0] == 'b' && cl[1] == 'l')
        {
            sum[i] = 6;
        }
        else if(cl[0] == 'g' && cl[1] == 'l' )
        {
            sum[i] = 100;
        }
        else if(cl[0] == 'g' && cl[1] == 'r' )
        {
            sum[i] = 8;
        }
        else if(cl[0] == 'R' )
        {
            sum[i] = 2;
        }
        else if(cl[0] == 'O')
        {
            sum[i] = 3;
        }
        else if(cl[0] == 'Y')
        {
            sum[i] = 4;
        }
        else if(cl[0] == 'G')
        {
            sum[i] = 5;
        }
        else if(cl[0] == 'V')
        {
            sum[i] = 7;
        }
        else if(cl[0] == 'B')
        {
            sum[i] = 0;
        }
        else if(cl[0] == 'W'  )
        {
            sum[i] = 9;
        }
        else if(cl[0]=='S')
        {
            sum[i] = 5;
        }

    }

    printf("Multiplier: ");
    scanf("%s",cl);

    if(cl[0] == 'b' && cl[1] == 'r' )
    {
        m = 10;
    }
    else if(cl[0] == 'b' && cl[1] == 'l')
    {
        m = 1000000;
    }
    else if(cl[0] == 'g' && cl[1] == 'l' )
    {
        m = 0.1;
    }
    else if(cl[0] == 'g' && cl[1] == 'r' )
    {
        m = 100000000;
    }
    else if(cl[0] == 'R' )
    {
        m = 100;
    }
    else if(cl[0] == 'O')
    {
        m = 1000;
    }
    else if(cl[0] == 'Y')
    {
        m = 10000;
    }
    else if(cl[0] == 'G')
    {
        m = 100000;
    }
    else if(cl[0] == 'V')
    {
        m = 10000000;
    }
    else if(cl[0] == 'B')
    {
        m = 1;
    }
    else if(cl[0] == 'W'  )
    {
        m = 1;
    }
    else if(cl[0]=='S')
    {
        m = 0.01;
    }

    printf("Tolerance: ");
    scanf("%s",cl);

    if(cl[0] == 'b' && cl[1] == 'r' )
    {
        t = 1;
    }
    else if(cl[0] == 'b' && cl[1] == 'l')
    {
        t = 0.25;
    }
    else if(cl[0] == 'g' && cl[1] == 'l' )
    {
        t = 5;
    }
    else if(cl[0] == 'g' && cl[1] == 'r' )
    {
        t = 0.5;
    }
    else if(cl[0] == 'R' )
    {
        t = 2;
    }
    else if(cl[0] == 'O')
    {
        t = 3;
    }
    else if(cl[0] == 'Y')
    {
        t = 4;
    }
    else if(cl[0] == 'G')
    {
        t = 0.5;
    }
    else if(cl[0] == 'V')
    {
        t = 0.1;
    }
    else if(cl[0] == 'B')
    {
        t = 0.000001;
    }
    else if(cl[0] == 'W'  )
    {
        t = 0.00001;
    }
    else if(cl[0]=='S')
    {
        t = 10;
    }

    printf("\n");
    printf(".......................\n");
    for(i=0; i<n-2; i++)
    {
        printf("color band %d is: %d\n",i+1,sum[i]);
    }
    printf("Multiplier: %.1f\n",m);
    printf("Tolerance: %.1f\n",t);
    printf(".......................\n");
    if(n == 4)
    {
        int x = sum[0]*10;
        int y = sum[1]*1;

        float res = (x+y)*m;
        float per = (res*t)/100;
        printf("\n..................................................");
        printf("\n\nResistance of the resistor: %.1f ohms +/-%.1f ohms\n\n",res,per);
        printf("..............................................\n\n");
    }
    else if(n==5)
    {
        int x = sum[0]*100;
        int y = sum[1]*10;
        int z = sum[2]*1;

        float res = (x+y+z)*m;
        float per = (res*t)/100;

        printf("\n..............................................");
        printf("\n\nResistance of the resistor: %.1f ohms +/-%.1f ohms\n\n",res,per);
        printf("..................................................\n\n");
    }
}
