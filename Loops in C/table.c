#include<stdio.h>

int main()
{
    int n, i = 1;
    printf("Enter the number you want multiplication table of : ");
    scanf("%d", &n);

    while(i < 11){
        printf("%d x %d = %d\n", n, i, n*i);
        i++;
    }
    return 0;
}