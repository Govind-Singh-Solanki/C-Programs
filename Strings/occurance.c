//Program to count occurances of a character in a string.

#include<stdio.h>

int main()
{
    char str[] = "Govind Singh Solanki";
    int count = 0;
    char x;
    printf("Enter the character you want to searach for : ");
    scanf("%c", &x);
    for(int i = 0; str[i]; i++)
    {
        if(str[i] == x)
        {
            count++;
        }
    }
    printf("%c occured %d times.", x, count);

    return 0;
}