//Program to get sum and average of 2 numbers using pointers.

#include<stdio.h>

int main()
{
    int a, b, avg, sum;
    int *x, *y;

    printf("Enter first number : ", a);
    scanf("%d", &a);
    printf("Enter second number : ", b);
    scanf("%d", &b);

    sum = a + b;
    x = &sum;

    avg = (sum)/2;
    y = &avg;

    printf("The sum of given 2 numbers is : %d\n", *x);
    printf("The average of given 2 numbers is : %d", *y);
    return 0;
}