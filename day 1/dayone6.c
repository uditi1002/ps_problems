#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter a,b,c: \n");
    scanf("%d%d%d",&a,&b,&c);
    if (a==b&&b==c)
        printf("Equilateral triangle");
    else if (a==b||b==c||a==c)
        printf("Isosceles triangle");
    else
        printf("Scalene triangle");
}
