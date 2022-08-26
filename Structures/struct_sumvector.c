// Program to create a function to add 2 vectors.

#include <stdio.h>

struct vector sumvector(struct vector v1, struct vector v2);

struct vector
{
    int x;
    int y;
};

int main()
{
    struct vector v1, v2, v3;

    printf("Enter the X dimension of v1 : ");
    scanf("%d", &v1.x);
    printf("Enter the Y dimension of v1 : ");
    scanf("%d", &v1.y);
    printf("Vector v1 : %dx + %dy\n\n", v1.x, v1.y);

    printf("Enter the X dimension of v2 : ");
    scanf("%d", &v2.x);
    printf("Enter the Y dimension of v2 : ");
    scanf("%d", &v2.y);
    printf("Vector v2 : %dx + %dy\n\n", v2.x, v2.y);

    v3 = sumvector(v1, v2);

    printf("Vector v3 : %dx + %dy\n\n", v3.x, v3.y);

    return 0;
}

struct vector sumvector(struct vector v1, struct vector v2)
{
    struct vector v3;
    v3.x = v1.x + v2.x;
    v3.y = v1.y + v2.y;
    return v3;
}