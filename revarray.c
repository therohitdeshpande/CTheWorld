#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("ENTER LENGTH: ");
    scanf("%d",&n);
    int a[n];
    printf("ARRAY: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    int tmp[n];
    for(int i=0;i<n;i++)
    {
        tmp[i]=a[n-1-i];

    }

    printf("REVERSED ARRAY: ");
    for(int i=0;i<n;i++)
    {
        printf(" %d",tmp[i]);
    }
    return 0;
}
