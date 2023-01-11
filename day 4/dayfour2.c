#include<stdio.h>
float Mean(int c[5])
{
    int sum=0,i;
    for (i=0;i<5;i++)
    {
        sum+=c[i];
    }
    return (float)(sum/5);
}
int Median(int c[5])
{
    return c[5/2];
}
void main()
{
    int a[5],i;
    printf("Enter the numbers: ");
    for (i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("mean=%f\n",Mean(a));
    printf("median=%d",Median(a));
}
