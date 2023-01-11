#include<stdio.h>
int Perfect(int n)
{
    int sum=0;
    for (int i=1;i<=n/2;i++)
    {
        if (n%i==0)
            sum+=i;
    }
    if (sum==n)
        printf("%d",sum);
}
void main()
{
    int l,u,i;
    printf("Enter l,u: ");
    scanf("%d%d",&l,&u);
    for (i=l;i<u;i++)
    {
        Perfect(i);
    }
}
