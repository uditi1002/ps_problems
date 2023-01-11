#include<stdio.h>
void main()
{
    int i,j,k,x;
    for(i=1;i<=5;i++)
    {
        for (j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        for (k=((5-i)*2)-1;k>=0;k--)
        {
            printf(" ");
        }
        for(j=i;j>=1;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}
