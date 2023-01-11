#include<stdio.h>
void main()
{
    int i=0,n,j=1;
    printf("Enter n: ");
    scanf("%d",&n);
    int a[n];
    while (j<=n)
    {
        a[i]=j;
        j+=2;
        i++;
    }
    if (n%2==0)
    {
        a[i]=n;
        i++;
        j=n-2;
        while (j>0)
        {
            a[i]=j;
            j-=2;
            i++;
        }

    }
    else
    {
        a[i]=n-1;
        i++;
        j=n-3;
        while(j>0)
        {
            a[i]=j;
            j-=2;
            i++;
        }
    }
    for (i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
