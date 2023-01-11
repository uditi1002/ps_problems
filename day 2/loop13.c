#include<stdio.h>
void main()
{
    int n,i=0;
    printf("Enter n: \n");
    scanf("%d",&n);
    int a[10];
    a[0]=n;
    while (a[i]>0)
    {
        a[i+1]=a[i]-5;
        i++;
    }
    while (a[i]!=n)
    {
        a[i+1]=a[i]+5;
        i++;
    }
    for (i=0;i<10;i++){
        printf("%d \n",a[i]);
    }
}
