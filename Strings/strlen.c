//Program to count characters in a string

#include<stdio.h>
#include<string.h>

int length(char *str);

int main()
{
    char a[25] = "Govind_Singh_Solanki";
    int len = length(a);
    printf("The length of given string is %d. ", len);
    
    return 0;
}

int length(char *str)
{
    char *ptr = str;
    int l = 0;
    while(*ptr != '\0')
    {
        l++;
        ptr++;
    }
    return l;
}