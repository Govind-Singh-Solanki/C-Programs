// Operator Precedence in C.

#include<stdio.h>

int main()
{
    float x = 2, y = 3, z = 3, k = 1;
    float result;

    result = 3*x/y-z+k;
    printf("The value of 3*x/y-z+k is : %f", result);
    return 0;
}