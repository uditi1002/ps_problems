#include<stdio.h>
void main()
{
    int i,n,j;
    printf("Enter n: ");
    scanf("%d",&n);
    int a[n];
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0;i<n;i+=2)
    {
        j=a[i];
        a[i]=a[i+1];
        a[i+1]=j;
    }
    for (i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
