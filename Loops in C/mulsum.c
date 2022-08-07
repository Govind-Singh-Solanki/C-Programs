// Calculatin sum of all the numbers occuring in a table!

#include <stdio.h>

int main()
{
    int sum = 0, res, n;

    printf("Enter the number you want the sum of multiplication table : ");
    scanf("%d", &n);

    for (int i = 1; i < 11; i++)
    {
        res = n * i;
        sum = sum + res;
    }

    printf("Sum of all numbers is : %d", sum);

    return 0;
}