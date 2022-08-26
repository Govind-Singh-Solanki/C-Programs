//Program to create a structure storing complex numbers.

#include<stdio.h>

typedef struct complex{
    float real;
    float imag;
}comp;

int main()
{
    comp c1;

    printf("Enter the real part of complex number : ");
    scanf("%f", &c1.real);

    printf("Enter the imaginary part of complex number : ");
    scanf("%f", &c1.imag);

    printf("\nComplex Number c1 = %.1fx + %.1fy", c1.real, c1.imag);

    return 0;
}