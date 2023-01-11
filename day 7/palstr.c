#include <stdio.h>
#include <string.h>
void main()
{
    char string1[5];
    int i,flag = 0;
    printf("Enter a string:");
    gets(string1);
    for(i=0;i<5;i++)
    {
        if(string1[i]!= string1[5-i-1]){
            flag = 1;
            break;
           }
        }
    if (flag)
        printf("%s is not a palindrome", string1);
    else
        printf("%s is a palindrome", string1);
}
