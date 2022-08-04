//Fibonacci Term using Recursion

#include <stdio.h>

int fibonacci(int num);
int main()
{
    int fibo, fibon;
    printf("Enter the element position you want Fibonacci number of : ");
    scanf("%d", &fibo);

    fibon = fibonacci(fibo);

    printf("The fibonacci term is : %d", fibon);

    return 0;
}

int fibonacci(int num)
{
    if (num == 0)
        return 0;
    else if (num == 1)
        return 1;
    else
        return fibonacci(num - 1) + fibonacci(num - 2);
}

//Fibonacci Term using Loop

// #include <stdio.h>

// int fibonacci(int num);
// int main()
// {
//     int fibo, fibon;
//     printf("Enter the element position you want Fibonacci number of : ");
//     scanf("%d", &fibo);

//     fibon = fibonacci(fibo);

//     printf("The fibonacci term is : %d", fibon);

//     return 0;
// }

// int fibonacci(int num)
// {
//     if (num <=1)
//     return num;

//     int a = 0, b = 1, fibo;
//     for (int i = 0; i<num - 1; i++){
//         fibo = a + b;
//         a = b;
//         b = fibo;
//     }
//     return fibo;
// }