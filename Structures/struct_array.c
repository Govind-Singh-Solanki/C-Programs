//Program to create an array of 5 complex numbers inside a structure and display them.

#include<stdio.h>

struct complex show(struct complex x);

struct complex{
    int real;
    int imag;
};

int main()
{
    struct complex comp[5], res;

    for(int i = 0; i < 5; i++){

    printf("Enter the real part of element %d : ", i+1);
    scanf("%d", &comp[i].real);

    printf("Enter the real part of element %d : ", i+1);
    scanf("%d", &comp[i].imag);
    }

    for(int i = 0; i < 5; i++){
        res = show(comp[i]);
        printf("Complex Number %d : %dx + %dy\n", i+1, res.real, res.imag);
    }

    return 0;
}

struct complex show(struct complex x)
{
    struct complex res;
    res.real = x.real;
    res.imag = x.imag;

    return res;
}