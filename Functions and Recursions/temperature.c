#include<stdio.h>

void temp(float degree);
int main()
{
    float currtemp;
    printf("Enter the temperature in Degree Celsius : ");
    scanf("%f", &currtemp);

    temp(currtemp);
    return 0;
}

void temp(float degree){
    float fahr;
    fahr = (degree * 1.8) + 32;
    printf("Temperature in Fahrenheit : %2.2f", fahr);
}