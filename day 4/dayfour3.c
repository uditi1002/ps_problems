#include<stdio.h>
int fac(int n)
{
    if (n==1)
        return n;
    else
        return n*fac(n-1);
}
void main()
{
    int n,i;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("%d",fac(n));
}
