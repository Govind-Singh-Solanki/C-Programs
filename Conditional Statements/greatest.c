// Finding greatest of 4 numbers!

#include <stdio.h>

int main()
{
    int a, b, c, d;

    printf("Enter value of a : ");
    scanf("%d", &a);

    printf("Enter value of b : ");
    scanf("%d", &b);

    printf("Enter value of c : ");
    scanf("%d", &c);

    printf("Enter value of d : ");
    scanf("%d", &d);

    if (a > b)
    {
        if (a > c)
        {
            if (a > d)
            {
                printf("%d is the greatest number!", a);
            }
            else
            {
                printf("%d is the greatest nymber!", d);
            }
        }
    }
    else if (b > c)
    {
        if (b > d)
        {
            printf("%d is the greatest number!", b);
        }
        else
        {
            printf("%d is the greatest number!", d);
        }
    }
    else if (c > d)
    {
        printf("%d is the greatest number!", c);
    }
    else
    {
        printf("%d is the greatest number!", d);
    }
    return 0;
}