#include <stdio.h>
int main()
{
    int a;
    printf("**************enter your age in years*****************\n");
    scanf("%d", &a);
    if (a >= 18)
    {
        printf("^^^^^^^^^^^^^^^^^Yep! You are eligible to drive^^^^^^^^^^^^^^^^^^^^^^^");
    }
    
    else
    {
        printf("$$$$$$$$$$$$$$$$$$Sorry , You are not eligible to drive$$$$$$$$$$$$$$$$$$$");
    }
    return 0;
}