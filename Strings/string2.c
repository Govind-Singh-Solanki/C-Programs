#include <stdio.h>
#include <string.h>

int main()
{
    char a[10];
    char b[10];
    char c;
    int i = 0;

    printf("Enter a string a : ");
    scanf("%s", a);

    printf("Enter character by character input in c : ");

    while (c != '\n')
    {
        fflush(stdin);
        scanf("%c", &c);
        b[i] = c;
        i++;
    }
    b[i-1] = '\0';
    

    printf("%s\n", a);
    printf("%s\n", b);

    int x = strcmp(a, b);
    printf("%d", x);

    return 0;
}