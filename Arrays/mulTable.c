#include<stdio.h>

void printTable(int *mulTable, int num, int n);

int main()
{
    int mulTable[3][10];
    int a, b, c;

    printf("Enter value of 'a' whose table you want : ");
    scanf("%d", &a);
    printf("Enter value of 'b' whose table you want : ");
    scanf("%d", &b);
    printf("Enter value of 'c' whose table you want : ");
    scanf("%d", &c);

    printTable(mulTable[0], a, 10);
    printTable(mulTable[1], b, 10);
    printTable(mulTable[2], c, 10);

    return 0;
}

void printTable(int *mulTable, int num, int n)
{
    printf("The multiplication table of %d is - \n", num);

    for (int i = 0; i < n; i++)
    {
        mulTable[i] = num * (i+1);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d x %d = %d\n", num, i+1, mulTable[i]);
    }
    
    printf("*************************************************\n");
}