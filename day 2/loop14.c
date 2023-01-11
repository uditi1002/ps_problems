#include <stdio.h>
void main(){
	int n,i,j,k;
	printf("Enter n: \n");
	scanf("%d", &n);
	for (i=1;i<=n;i++)
	{
	    if (i==1||i==n)
        {
            for (j=1;j<=n;j++)
            {
                printf("*");
            }
        }
        else
        {
           for (j=n-i;j>0;j--)
           {
               printf(" ");
           }
           printf("*");
        }
        printf("\n");
	}
}
