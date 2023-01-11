#include<stdio.h>
int Pal(int n)
{
    int i=n,r,rev=0;
    while (i!=0)
    {
        r=i%10;
        rev=rev*10+r;
        i=i/10;
    }
    if (rev==n)
        printf("Palindrome number");
    else
        printf("Not a palindrome number");
}
void main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    Pal(n);
}
