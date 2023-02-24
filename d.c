#include<stdio.h>
int temp(int f, int c);

int main(){
 int b=32 ,  c=3 ;
    temp(b, c);
    
    return 0;
}
int temp(int f,int c ){
    scanf("%d", &f);
    c = (f-32)*(5/9) ;
    return(
         printf("temprature in celcius is %d", c);
    )

}