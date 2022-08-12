#include<stdio.h>

int main()
{
    int marks[5];
    // printf("Enter the marks of student 1 : ");
    // scanf("%d", &marks[0]);
    // printf("Enter the marks of student 2 : ");
    // scanf("%d", &marks[1]);
    // printf("Enter the marks of student 3 : ");
    // scanf("%d", &marks[2]);
    // printf("Enter the marks of student 4 : ");
    // scanf("%d", &marks[3]);
    // printf("Enter the marks of student 5 : ");
    // scanf("%d", &marks[4]);

    for(int i = 0; i < 5; i++){
        printf("Enter marks of student %d : ", i+1);
        
        scanf("%d", &marks[i]);
    }

    for(int i = 0; i <5; i++){
        printf("Marks of student %d = %d\n", i+1, marks[i]);
    }
    return 0;
}