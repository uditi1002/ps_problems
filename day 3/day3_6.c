#include<stdio.h>
#include<math.h>
int fac (int n){
    int f=1;
    for (int i=1;i<=n;i++){
        f*=i;
    }
    return f;
}
void main(){
    int n,x,sum=0,j=0;
    printf("Enter x,n: ");
    scanf("%d%d",&x,&n);
    for (int i=0;i<=n;i+=2){
        sum+=pow(-1,j)*pow(x,i)/fac(i);
        j++;
    }
    printf("%d",sum);
}

