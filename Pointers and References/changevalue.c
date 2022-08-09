//Program to change the value to 10 times using call by reference.

#include<stdio.h>

void change_value(int *x);
int main()
{
    int a = 25;
    int *b;
    b = &a;

    printf("The original value of variable is %d\n", a);
    change_value(b);
    return 0;
}

void change_value(int *x){
    int c;
    c = 10 * (*x);
    printf("The new value after changing is %d\n", c);
}