#include<stdio.h>
void main()
{
    int i,j,k;
    for(i=6;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        for(k=0;k<((5-i)*2)+2;k++)
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
