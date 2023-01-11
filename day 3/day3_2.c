#include<stdio.h>
int fac (int n){
    int f=1;
    for (int i=1;i<=n;i++){
        f*=i;
    }
    return f;
}
void main(){
    int n,sum=0;
    printf("Enter n: ");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        sum+=fac(i)/i;
    }
    printf("%d",sum);
}
