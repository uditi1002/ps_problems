#include<stdio.h>
void main()
{
    int i,n,j,k;
    printf("Enter n: \n");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        k=i;
        for (j=1;j<=i;j++)
        {
            printf("%d",k);
            k++;
        }
        printf("\n");
    }
}
