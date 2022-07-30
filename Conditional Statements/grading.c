//WAP to find grade of a student with his marks.

#include<stdio.h>

int main()
{
    int marks;
    
    printf("Enter the marks ranging from (0-100): ");
    scanf("%d", &marks);

    if(marks>100){
        printf("Dont be smart, enter marks between the limit!");
    }
    else{

    switch (marks/10)
    {
    case 10:
    case 9:
    printf("Grade : A");    //marks between 90-100
    break;

    case 8:
    printf("Grade : B");    //marks between 80-90
    break;

    case 7:
    printf("Grade : C");    //marks between 70-80
    break;

    case 6:
    printf("Grade : D");    //marks between 60-70
    break;

    default:
    printf("Grade : F");    //marks less than 60
    break;
    }
    }
    return 0;
}