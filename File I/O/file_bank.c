// Program to write name and salary of an employee in text file.

#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("employee_info.txt", "w");

    struct employee
    {
        char name[10];
        int sal;
    };

    struct employee emp[2];

    for (int i = 0; i < 2; i++)
    {
        printf("Enter the name of employee %d : ", i + 1);
        scanf("%s", emp[i].name);
        printf("Enter the salary of employee %d : ", i + 1);
        scanf("%d", &emp[i].sal);
    }

    for (int i = 0; i < 2; i++)
    {
        fprintf(ptr, "%s, %d\n", emp[i].name, emp[i].sal);
    }

    fclose(ptr);

    return 0;
}