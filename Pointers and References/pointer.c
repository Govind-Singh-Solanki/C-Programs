//Program to print address of a variable and then using that address print the value at that address.

#include<stdio.h>

int main()
{
    int *a;
    int x = 5;
    a = &x;

    printf("The value of number is %d\n", x);
    printf("The address of given variable is %u\n", a);
    printf("The value of the given address is %d\n", *a);
    return 0;
}