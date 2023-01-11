#include<stdio.h>
void main()
{
    int bs,hra,da,allow,pf;
    char x;
    float total;
    printf("Enter basic salary: \n");
    scanf("%d",&bs);
    printf("Enter grade: \n");
    scanf("%s",&x);
    hra=(20*bs)/100;
    da=(50*bs)/100;
    pf=(11*bs)/100;
    if(x=='A')
    {
        allow=1700;
    }
    else if(x=='B')
    {
        allow=1500;
    }
    else
    {
        allow=1300;
    }
    total=bs+hra+da+allow-pf;
    printf("Total salary: %f",total);
}
