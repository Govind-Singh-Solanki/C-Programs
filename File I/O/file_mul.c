//Program to write multiplication table in file.

#include<stdio.h>

int main()
{
    FILE *ptr;
    int n;
    ptr = fopen("multiplication.txt", "w");

    printf("Enter the number you want to write multiplication table of : ");
    scanf("%d", &n);

    for(int i = 1; i <= 10; i++)
    {
        fprintf(ptr, "%d x %d = %d\n", n, i, n*i);
    }
    fclose(ptr);

    return 0;
}