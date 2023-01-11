#include<stdio.h>
void main()
{
    int x,y;
    printf("Enter x and y coordinates: \n");
    scanf("%d%d",&x,&y);
    if (x>0&&y>0)
        printf("First quadrant");
    else if (x<0&&y>0)
        printf("Second quadrant");
    else if (x<0&&y<0)
        printf("Third quadrant");
    else
        printf("Fourth quadrant");
}
