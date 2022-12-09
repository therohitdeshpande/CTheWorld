#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c;
printf("ENTER THREE NUMBERS ");
scanf(" %d",&a);
scanf(" %d",&b);
scanf(" %d",&c);
printf("GREATEST NUMBER IS: ");
if(a>b)
{
if(a>c)
printf(" %d",a);
else
printf(" %d",c);
}
else
{
if(b>c)
printf(" %d",b);
else
printf(" %d",c);
}
return 0;
}
