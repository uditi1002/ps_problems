#include<stdio.h>
void main()
{
    int i,min,n;
    printf("Enter n: ");
    scanf("%d",&n);
    int a[n];
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    for (i=0;i<n;i++)
    {
        if (a[i]<min)
        {
            min=a[i];
        }
    }
    printf("%d",min);
}
