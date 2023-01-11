#include<stdio.h>
#include<string.h>
char revstr(char str[20]){
    int l, t;
    l=strlen(str);
    for (int i=0;i<l/2;i++){
        t=str[i];
        str[i]=str[l-i-1];
        str[l-i-1]=t;
    }
    puts(str);
}
void main(){
    char s[20];
    printf("Enter the string: ");
    gets(s);
    revstr(s);
}
