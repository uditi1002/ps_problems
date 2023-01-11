#include<stdio.h>
#include<string.h>
char swapcase(char str[20]){
    for (int i=0;str[i]!='\0';i++){
       if (str[i] >= 'A' && str[i] <= 'Z')
         str[i] = str[i] + 32;
      else if (str[i] >= 'a' && str[i] <= 'z')
         str[i] = str[i] - 32;
    }
    puts(str);
}
void main(){
    char s[20];
    printf("Enter the string: ");
    gets(s);
    swapcase(s);
}
