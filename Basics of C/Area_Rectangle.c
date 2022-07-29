// Area of Rectangle using hard coded inputs

// #include<stdio.h>

// int main()
// {
//     int a = 5, b =10;
//     printf("Area of Rectangle is : %d\n", a*b);
//     return 0;
// }


// Area of Rectangle using user provided inputs

#include<stdio.h>

int main()
{
    int a, b;
    printf("Enter value of a : ");
    scanf("%d", &a);
    printf("Enter value of b : ");
    scanf("%d", &b);

    printf("Area of Rectangle is : %d\n", a*b);
    
    return 0;
}