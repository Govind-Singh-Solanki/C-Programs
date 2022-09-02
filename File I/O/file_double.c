// Program to read an integer from a file and double its value and write it again there.

#include <stdio.h>

int main()
{
    FILE *ptr1;
    // FILE *ptr2;
    ptr1 = fopen("value_double.txt", "r");
    int x = fscanf(ptr1, "%d", &x);
    int y = (2*x);
    // fprintf(ptr1, "%d", y);
    // fclose(ptr1);

    ptr1 = fopen("value_double.txt", "w");
    
    fprintf(ptr1, "%d", y);

    fclose(ptr1);

    return 0;
}