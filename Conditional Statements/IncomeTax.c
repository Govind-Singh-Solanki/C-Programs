//Income Tax Calculator

#include<stdio.h>

int main()
{
    float income;
    float amount;

    printf("Enter your income in LPA : ");
    scanf("%f", &income);

    if(income<2.5){
        printf("You don't have to pay tax!");
    }
    else if(income>2.5 && income<5){
        amount = ((income/100)*5)*100000;
        printf("You have to pay %6.0f rupees as tax!", amount);
    }
    else if(income>5 && income<10){
        amount = ((income/100)*20)*100000;
        printf("You have to pay %6.0f rupees as tax!", amount);
    }
    else{
        amount = ((income/100)*30)*100000;
        printf("You have to pay %6.0f rupees as tax!", amount);
    }
    return 0;
}