#include<stdio.h>
#include<string.h>
int wordcount(char str[20]){
    int i,c=1;
    for (i=0;str[i]!='\0';i++){
        if (str[i]==' ' && str[i+1]!=' ')
            c++;
    }
    return c;
}
void main(){
    char s[20];
    printf("Enter the string: ");
    gets(s);
    printf("Number of words in the string: %d",wordcount(s));
}
