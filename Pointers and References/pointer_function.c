//Program to print address of variable and pass it to function to see if it prints the same address.

#include<stdio.h>

void address(int a);
void address2(int *b);
int main()
{
    int i = 10;
    int *g;
    g = &i;

    printf("The address of variable i is %d\n", &i);
    address(i);
    address2(g);
    return 0;
}

void address(int a){
    printf("The address of a is %d\n", &a);
}

void address2(int *b){
    printf("The address of b is %u\n", b);
    printf("The value of b is %d\n", *b);
}