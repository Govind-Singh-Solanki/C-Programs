//Program to cut the string in parts.

#include<stdio.h>

void slice(char *ptr, int a, int b);

int main()
{
    char ptr[] = "govindsinghsolanki";
    slice(ptr, 3, 8);
    printf("The desired string is : %s", ptr);
    return 0;
}

void slice(char *ptr, int a, int b){
    int i = 0;
    while((i+a) < b){
        ptr[i] = ptr[i+a];
        i++;
    }
    ptr[i] = '\0';
}