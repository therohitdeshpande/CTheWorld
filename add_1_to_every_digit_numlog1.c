//input a number and print new number having every digit added by 1
#include<stdio.h>
int main()
{
    int n;
    int r1=0,r2=0;
    int d1=0,d2=0;
    int tmp1=0,tmp2;

    printf("ENTER A NUMBER: ");
    scanf("%d",&n);

    //adding 1 to each digit
    tmp1=n;
    while(tmp1>0)
    {
        r1=tmp1%10;
        if(r1==9)
        {
            r1=0;
        }
        else
        {
            r1=r1+1;
        }
        d1=d1*10+r1;
        tmp1=tmp1/10;
    }

    //side effect- number gets reversed
    //need to reverse number again to get correct result
    tmp2=d1;
    while(tmp2>0)
    {
        r2=tmp2%10;
        d2=d2*10+r2;
        tmp2=tmp2/10;
    }

    printf("NEW NUMBER: %d",d2);
    return 0;
}
