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

    int min=0,tmp=0;
    for(int i=0;i<n;i++)
    {
        min=i;
        for(int j=i;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        tmp=a[i];
        a[i]=a[min];
        a[min]=tmp;
    }

    printf("SORTED ARRAY: ");
    for(int i=0;i<n;i++)
    {
        printf(" %d",a[i]);
    }

    printf("\n");
    printf("ENTER NUMBER TO BE SEARCHED: ");
    int x;
    scanf("%d",&x);
    for(int i=0;i<n;i++)
    {
        if(x==a[i])
        {
            printf("LOCATION: %d",i+1);
            break;
        }

    }
    return 0;
}
