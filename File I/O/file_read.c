//Program to read integers from a file in C.

#include<stdio.h>

int main()
{
    FILE *ptr;
    int abc;
    ptr = fopen("read.txt", "r");

    // abc = fscanf(ptr, "%d", &abc);
    
    //fscanf(ptr, "%d", &abc);      //reads tile last 2nd integers of file
    while(fscanf(ptr, "%d", &abc) != EOF)
    {
        printf("%d ", abc);
        // fscanf(ptr, "%d", &abc);
    }
    fclose(ptr);

    return 0;
}