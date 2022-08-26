//Program to show the usage of arrow operator (->)

#include<stdio.h>
#include<string.h>

struct student{
    char name[20];
    int age;
};

int main()
{
    //struct student s1;
    struct student *st1;


    //st1 = &s1;

    strcpy(st1->name, "Govind");
    st1->age = 21;

    printf("Name of student : %s\n", st1->name);
    printf("Age of student : %d\n", st1->age);

    return 0;
}