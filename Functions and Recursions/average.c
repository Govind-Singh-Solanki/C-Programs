#include<stdio.h>

float average(float a, float b, float c);
int main()
{
    float a, b, c;
    printf("Enter the value of a : ");
    scanf("%f", &a);

    printf("Enter the value of b : ");
    scanf("%f", &b);

    printf("Enter the value of c : ");
    scanf("%f", &c);

    average(a, b, c);
    return 0;
}

float average(float a, float b, float c){
    float average;
    average = (a + b + c)/3;
    printf("Average of the numbers is : %f", average);
    return 0;
}