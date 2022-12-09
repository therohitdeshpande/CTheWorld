#include<stdio.h>
#include<math.h>
int main()
{
    double len,wid,per,area;
    printf("ENTER SIDES OF RECTANGLE: \n");
    scanf("%lf",&len);
    scanf("%lf",&wid);
    per=2*(len+wid);
    area=len*wid;
    printf("PERIMETER= %lf",per);
    printf("\n");
    printf("AREA= %lf",area);
    return 0;
}
