//Program to decrypt a given string.

#include<stdio.h>

void decrypt(char *st);

int main()
{
    char st[] = "J mpwf zpv";
    decrypt(st);
    printf("Decrypted string is : %s", st);
    return 0;
}

void decrypt(char *st)
{
    char *str = st;         //st is completely stored in str.
    printf("%s\n", str);
    while(*str != '\0')
    {
        *str = *str - 1;
        str++;
    }
}