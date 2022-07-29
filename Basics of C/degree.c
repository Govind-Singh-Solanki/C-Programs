// Converting Degree Celsius to Fahrenheit

#include<stdio.h>

int main()
{
    float temp;
    printf("Enter the Temperature in Celsius : ");
    scanf("%f", &temp);

    printf("Given temperature in Fahrenheit is : %f", 1.8*temp + 32);
    return 0;
}