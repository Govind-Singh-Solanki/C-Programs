//Program to change value using Call by Value. Wont change value with call by value bcoz a copy of original variable is made.

#include<stdio.h>

void change_value(int a);
int main()
{
    int a = 25;

    printf("The original value of variable is %d\n", a);
    change_value(a);
    printf("The updated value of a is %d", a);
    return 0;
}

void change_value(int a){
    int b;
    b = 10 * a;
    a = 250;
    
    printf("The new value of a is %d\n", b);
}