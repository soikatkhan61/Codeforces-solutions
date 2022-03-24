#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    int _1,_2,_3,_4,_5,_6,result;

    _1 = a+b+c;
        result = _1;

    _2 = a*b*c;
        if(_2 > result){
            result = _2;
        }

    _3 = a+(b*c);
        if(_3 > result){
            result = _3;
        }

    _4 = a*(b+c);
        if(_4 > result){
            result = _4;
        }

    _5 = (a*b)+c;
        if(_5 > result){
            result = _5;
        }

    _6 = (a+b)*c;
        if(_6 > result){
            result = _6;
        }

    printf("%d\n",result);
}
