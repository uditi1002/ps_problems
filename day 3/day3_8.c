#include<stdio.h>
void main(){
    int n,sum=0;
    printf("Enter n: ");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        sum+=i*(i+1)*(i+2);
    }
    printf("%d",sum);
}
