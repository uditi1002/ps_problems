#include<stdio.h>
#include<string.h>
char concat(char a[20], char b[20]){
    char str[20];
    int i,j=0;
    for (i=0;a[i]!='\0';i++){
        str[j]=a[i];
        j++;
    }
    for (i=0;b[i]!='\0';i++){
        str[j]=b[i];
        j++;
    }
    puts(str);
}
void main(){
    char s1[20],s2[20];
    printf("Enter the strings: ");
    scanf("%s%s",&s1,&s2);
    concat(s1,s2);
}
