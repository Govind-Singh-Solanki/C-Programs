//Pointer to Pointer program.

#include<stdio.h>

int main()
{
    int i = 20;
    int *x;
    int **y;

    x = &i;
    y = &x;

    printf("The value of 'i' is %d\n", i);
    printf("The value of 'i' using a pointer is %d\n", *x);
    printf("The value of 'i' using a pointer to pointer is %d\n", **y);
    return 0;
}