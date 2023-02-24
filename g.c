#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf("ist no.\n");
    scanf("%d", &a);
     printf("2nd no.\n");
    scanf("%d", &b);
    printf("3rd no.\n");
    scanf("%d", &c);
     printf("4th no.\n");
    scanf("%d", &d);
    if (a > (b, c, d)) {printf("the greatest no is %d", a);}
    else if (b>(a, c, d)){printf("the greatest no is %d", b);}
    else if (c>(a, b, d)){printf("the greatest no is %d", c);}
    else if (d>(a, b, c)){printf("the greatest no is %d", d);}
    else {printf("oooooops, you have done any mistake");}
    return 0;
    
}