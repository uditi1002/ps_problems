#include<stdio.h>
void main()
{
    int i,j,k;
    for(i=1;i<=4;i++)
    {
        for (k=4;k>=i;k--)
        {
            printf(" ");
        }
        for(j=1;j<=((2*i)-1);j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=3;i>=1;i--)
    {
        for(k=i;k<=4;k++)
        {
            printf(" ");
        }
        for(j=((2*i)-1);j>=1;j--)
        {
           printf("*");
        }
        printf("\n");
    }
}
