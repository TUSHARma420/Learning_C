#include<stdio.h>

int main(){
    int a=1, sum=0, n;
    printf("enter the no. till sum u req\n");
    scanf("%d", &n);
    for( a ; a<=n; a++){
        sum=sum+a;

    } 
    printf("sum of first %d natural no.s is %d",n, sum );
    return 0;
}