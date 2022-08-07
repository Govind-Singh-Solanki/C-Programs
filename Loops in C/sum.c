// Sum of first 10 natural numbers using While loop

// #include <stdio.h>

// int main()
// {
//     int sum = 0, i = 1;
//     while (i < 11)
//     {
//         sum = sum + i;
//         i++;
//     }
//     printf("Sum of first 10 natural numbers is : %d", sum);

//     return 0;
// }


// Sum of first 10 natural numbers using do while loop


// #include <stdio.h>

// int main()
// {
//     int sum = 0, i = 1;
//     do{
//         sum = sum + i;
//         i++;
//     }while(i < 11);

//     printf("Sum of first 10 natural numbers is : %d", sum);

//     return 0;
// }


// Sum of first 10 natural numbers using for loop


#include <stdio.h>

int main()
{
    int sum = 0, i;
    for (i = 1; i < 11; i++)
    {
        sum = sum + i;
    }
    printf("Sum of first 10 natural numbers is : %d", sum);

    return 0;
}