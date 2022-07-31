// Program to check if number is divisible by 97!

#include<stdio.h>

int main()
{
    int x; 
    printf("Enter a number : ");
    scanf("%d", &x);

    if(x % 97 == 0){
        printf("%d is divisible by 97!", x);
    }
    else{
        printf("%d is not divisible by 97!", x);
    }
    return 0;
}