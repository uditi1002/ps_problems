#include<stdio.h>
#include<string.h>
void compare(char n[20], char m[20]){
    int f=0;
    for (int i=0; n[i]!='\0'&&m[i]!='\0';i++){
        if (n[i]!=m[i]){
            f=1;
            break;
        }
    }
    if (f)
        printf("Strings aren't same");
    else
        printf("Strings are same");
}
void main(){
    char s1[20],s2[20];
    printf("Enter the strings: ");
    scanf("%s%s",&s1,&s2);
    compare(s1,s2);
}
