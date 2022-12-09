#include<stdio.h>
#include<math.h>
int main() 
{
    double a,b,c,per,s,area;
    printf("ENTER THE SIDES OF A TRIANGLE: \n");
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);
    per=a+b+c;
    s=per/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("PERIMETER= %lf",per);
    printf("\n");
    printf("AREA= %lf",area);
    return 0;
}
