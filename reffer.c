#include<stdio.h>
int main()
{
    int testcase=10;
    while(testcase--){
        int tk=100;
    float P1,P2,P3,P4,P5;
    P1=50.0/100;
    P2=25.0/100;
    P3=10.0/100;
    P4=4.0/100;
    P5=1.0/100;

    int Amar,from_lev2,from_lev3,from_lev4,from_lev5;
    int n,n1,n2,n3,n4,n5,L1,L2,L3,L4,L5;
    printf("Enter the number of adding people : ");
    scanf("%d",&n);
    n1=n;
    n2=n*n1;
    n3=n*n2;
    n4=n*n3;
    n5=n*n4;

    L1=n1*tk*P1;
    L2=n2*tk*P2;
    L3=n3*tk*P3;
    L4=n4*tk*P4;
    L5=n5*tk*P5;
    Amar=L1+L2+L3+L4+L5;
    printf("\nYour rewards: %d TK\n\n",Amar);
    from_lev2=L1+L2+L3+L4;
    from_lev3=L1+L2+L3;
    from_lev4=L1+L2;
    from_lev5=L1;
    printf("%d TK\n",from_lev2*n1);
    printf("%d TK\n",from_lev3*n2);
    printf("%d TK\n",from_lev4*n3);
    printf("%d TK\n\n",from_lev5*n4);

    int people,total_money,profit;
    people=n1+n2+n3+n4+n5;
    total_money=people*tk;
    profit=total_money-(Amar + from_lev2*n1 + from_lev3*n2 + from_lev4*n3 + from_lev5*n4);
    printf("Total People: %d\n",people);
    printf("Total Collection: %d tk\n",total_money);
    printf("Profit: %d tk\n\n",profit);
    }

}
