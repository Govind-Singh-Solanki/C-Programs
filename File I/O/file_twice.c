// Program to read a file character by character and write it twice in a separate file.

#include <stdio.h>

int main()
{
    FILE *ptr1;
    FILE *ptr2;
    FILE *ptr3;     //so we can write the whole line again in new line using new variable.

    ptr1 = fopen("demo.txt", "r");
    ptr3 = fopen("demo.txt", "r");
    ptr2 = fopen("writing_twice.txt", "w");

    char x;
    char y;
    x = fgetc(ptr1);

    while (x != EOF)
    {
        fputc(x, ptr2);
        // fputc(x, ptr2);
        x = fgetc(ptr1);
    }

    fprintf(ptr2, "\n");

    y = fgetc(ptr3);

    while (y != EOF)
    {
        fputc(y, ptr2);
        y = fgetc(ptr3);
    }

    fclose(ptr1);
    fclose(ptr2);

    return 0;
}