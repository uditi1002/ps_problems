#include<stdio.h>
#include<math.h>
int check (int x)
{
    int i=x,t=x,c=0;
    while (i!=0)
    {
        i=i/10;
        c++;
    }
    if (c==1)
        return 0;
    int b[c];
    for (i=0;i<c;i++)
    {
        b[i]=t%10;
        t=t/10;
    }
    for (i=0;i<c-1;i++)
    {
        if (abs(b[i]-b[i+1])!=1)
            return 0;
    }
    return 1;
}
void main()
{
    int i,n,k,f;
    printf("Enter n and k: ");
    scanf("%d%d",&n,&k);
    int a[n];
    printf("Enter the elements: ");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0;i<n;i++)
    {
        if (a[i]<k&&check(a[i]))
        {
            printf("%d ",a[i]);
        }
    }
}
