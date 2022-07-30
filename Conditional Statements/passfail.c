//Pass Fail Tester!

#include<stdio.h>

int main()
{
    float total;
    int M, E, S;

    printf("Enter the marks in English : ");
    scanf("%d", &E);
    printf("Enter the marks in Maths : ");
    scanf("%d", &M);
    printf("Enter the marks in Science : ");
    scanf("%d", &S);

    total = (M+E+S)/3; //(/300)*100 gives result in 0.something so it always returns fails

    if((total<40) || M<33 || E<33 || S<33){
        printf("You scored %f \nYou have Failed!", total);
    }
    else{
        printf("You scored %f \nYou have Passed!", total);
    }
    return 0;
}