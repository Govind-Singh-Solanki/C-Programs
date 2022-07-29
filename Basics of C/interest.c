//Simple Interest Calculator

// #include<stdio.h>

// int main()
// {
//     float P, Amount;  // P = principal amount
//     float r, t; //r = rate of interest,  t = time period in YEARS,
//     printf("Enter the Principal Amount given out : ");
//     scanf("%f", &P);
//     printf("Enter the Time Period for which amount was given : ");
//     scanf("%f", &t);
//     printf("Enter the rate of interest : ");
//     scanf("%f", &r);

//     r = r/100;
//     t = t/12;
//     Amount = P*(1 + (r*t));

//     printf("Amount after applying interest = %f", Amount);
//     return 0;
// }


// Compound Interest Calculator

#include<stdio.h>
#include<math.h>

int main()
{
    float P, t, r, Amount, n; // n = no. of times Interest is applied
    printf("Enter the Principal Amount : ");
    scanf("%f", &P);
    printf("Enter the Time Period for which amount was given : ");
    scanf("%f", &t);
    printf("Enter the rate of interest : ");
    scanf("%f", &r);
    printf("Enter no. of times interest is to be applied : ");
    scanf("%f", &n);

    r = r/100;
    t = t/12;
    Amount = P*pow((1 + r/n), n*t);

     printf("Amount after applying interest = %f", Amount);
    return 0;
}