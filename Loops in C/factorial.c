// Factorial of a number using for loop


// #include <stdio.h>

// int main()
// {
//     int n, fact = 1;
//     printf("Enter the number : ");
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++)
//     {
//         fact = fact * i;
//     }
//     printf("Factorial of %d is : %d", n, fact);
//     return 0;
// }


// Factorial of number using while loop


#include <stdio.h>

int main()
{
    int n, fact = 1, i = 1;
    printf("Enter the number : ");
    scanf("%d", &n);

    while (i <= n)
    {
        fact = fact * i;
        i++;
    }

    printf("Factorial of %d is : %d", n, fact);
    return 0;
}