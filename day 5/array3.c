#include<stdio.h>
void main()
{
    int i,n,s1=0,s2=0;
    printf("Enter n: ");
    scanf("%d",&n);
    int a[n];
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    if (n%2==0)
    {
        for (i=0;i<n/2;i++)
        {
            s1+=a[i];
        }
        for (i=n/2;i<n;i++)
        {
            s2+=a[i];
        }
    }
    else
    {
        for (i=0;i<(n+1)/2;i++)
        {
            s1+=a[i];
        }
        for (i=(n+1)/2;i<n;i++)
        {
            s2+=a[i];
        }
    }
    printf("%d",s1*s2);
}
