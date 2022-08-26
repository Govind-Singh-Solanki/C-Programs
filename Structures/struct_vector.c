//Program to create a structure to make 2-D vectors using it.

#include<stdio.h>

struct vector{
    int x;
    int y;
};

int main()
{
    struct vector v1, v2;
    v1.x = 10;
    v1.y = 20;
    printf("*******************VECTOR 1*******************\n\n");
    printf("Dimension X = %d and Dimension Y = %d\n\n", v1.x, v1.y);

    v2.x = 30;
    v2.y = 40;
    printf("*******************VECTOR 2*******************\n\n");
    printf("Dimension X = %d and Dimension Y = %d\n\n", v2.x, v2.y);


    return 0;
}