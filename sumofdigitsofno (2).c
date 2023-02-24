#include<stdio.h>

int main(){
    int n=234, r, sum=0;
    while (n>0)
    {
        r = n%10 ;
        sum = sum+r ;
        n = n/10;
    
    }
    printf("sum of digits of no. is: %d", sum);
    return 0;
}