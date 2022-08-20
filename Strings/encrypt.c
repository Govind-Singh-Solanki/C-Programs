//Program to encrypt a given string.

#include<stdio.h>

void encrypt(char *st);

int main()
{
    char st[] = "I love you";
    encrypt(st);
    printf("Encrypted string is : %s", st);
    return 0;
}

void encrypt(char *st)
{
    char *str = st;         //st is completely stored in str.
    printf("%s\n", str);
    while(*str != '\0')
    {
        *str = *str + 1;
        str++;
    }
}