#include<stdio.h>
#include<math.h>
int main()
{
    float p,r,R,E;
    int n;

    printf("ENTER PRINCIPAL AMOUNT= ");
    scanf("%f",&p);
    printf("ENTER RATE PER ANNUM= ");
    scanf("%f",&R);
    printf("ENTER TIME IN MONTHS= ");
    scanf("%d",&n);

    r=R/1200;
    E=(p*r*pow((1+r),n))/(pow((1+r),n)-1);

    printf("MONTHLY EMI= %f",E);
    return 0;
}
