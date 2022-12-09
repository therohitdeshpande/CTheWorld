#include<stdio.h>
#include<math.h>
int main()
{
    double rad,cir,area,pi=3.14;
    printf("ENTER RADIUS OF CIRCLE: \n");
    scanf("%lf",&rad);
    cir=2*pi*rad;
    area=pi*rad*rad;
    printf("CIRCUMFERENCE= %lf",cir);
    printf("\n");
    printf("AREA= %lf",area);
    return 0;
}
