//Program to check whether a given character is present in a string or not.

#include<stdio.h>
#include<stdbool.h> 

int main()
{
    char x;
    bool flag = 0;
    char str[] = "I am a Computer Science Engineer!";
    printf("Enter the character you want to look up for : ");
    scanf("%c", &x);

    for(int i = 0; str[i]; i++)
    {
        if(str[i] == x)
        {
            flag = 1;
        }
        else
        {
            flag = 0;
        }
    }

    if(flag == 1)
    {
        printf("The given character %c is present in string.", x);
    }
    else
    {
         printf("The given character %c is not present in string.", x);
    }

    return 0;
}