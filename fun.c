#include<stdio.h>
int swap(int*x, int*y)
{int temp;
 temp=x;
 x=y; 
 y=temp;
 return 0;
 }
int main(){
    int a=100, b=200;
    swap(a,b);
    printf("value of a = %d\n", a);
    printf("value of b = %d\n", b);
    return 0;
}
   