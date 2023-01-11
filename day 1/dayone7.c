#include<stdio.h>
void main()
{
    float x;
    printf("Enter temperature in centigrade: \n");
    scanf("%f",&x);
    if (x<0)
        printf("Freezing weather");
    else if (x>=0&&x<10)
        printf("Very cold weather");
    else if (x>=10&&x<20)
        printf("Cold weather");
    else if (x>=20&&x<30)
        printf("Normal is temperature");
    else if (x>=30&&x<40)
        printf("Hot");
    else
        printf("Very hot");
}
