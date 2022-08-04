#include<stdio.h>

float force(float mass);
int main()
{
    float m;
    printf("Enter the mass in Kg : ");
    scanf("%f", &m);

    printf("The value for Force in Newton is : %.2f", force(m));
    return 0;
}

float force(float mass){
    float Force;
    Force = mass * 9.8;
    return Force;
}