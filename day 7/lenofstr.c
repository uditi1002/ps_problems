#include<stdio.h>
#include<string.h>
int lenofstr(char str[20]){
    int i,j=0;
    for (i=0;str[i]!='\0';i++){
        j++;
    }
    return j;
}
void main(){
    char s[20];
    printf("Enter the string: ");
    gets(s);
    printf("Length of string: %d",lenofstr(s));
}
