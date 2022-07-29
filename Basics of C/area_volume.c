// Area of a Circle

// #include<stdio.h>
// #define Pi 3.14

// int main()
// {
//     int r = 10;
//     printf("Area of circle = %f", Pi*r*r);
//     return 0;
// }


// Volume of a Cylinder

#include<stdio.h>
#define Pi 3.14

int main()
{
    int r, h;
    printf("Enter the radius of Cylinder : ");
    scanf("%d", &r);
    printf("Enter the height of Cylinder : ");
    scanf("%d", &h);

    printf("Volume of Cylinder = %f", Pi*r*r*h);

    return 0;
}