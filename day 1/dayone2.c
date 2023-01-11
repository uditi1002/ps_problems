#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter a,b,c: \n");
    scanf("%d%d%d",&a,&b,&c);
    a>b?a>c?printf("%d is greatest",a):printf("%d is greatest",c):b>c?printf("%d is greatest",b):printf("%d is greatest",c);
}
