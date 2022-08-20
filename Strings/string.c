#include<stdio.h>
#include<string.h>

int main()
{
    char a[10];
    char *b = a;            //pointer stores array address and while incrementing pointer it prints the whole array
    scanf("%s", &a);        //%c ek character input lega jabki %s ek string input lega until null character
    while(*b != '\0'){          //loop isliye taaki pura string print kare and not just first character
    printf("%c", *b);
    b++;
    }

    // char s1[9] = "Hello";
    // char s2[] = "Govind";
    // strcat(s1, s2);
    // printf("%s", s1);

    return 0;
}