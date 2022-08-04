#include<stdio.h>

void printstar(int n);
int main()
{
    int n;
    printf("Enter number of rows : ");
    scanf("%d", &n);

    printstar(n);
    return 0;
}

void printstar(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= (2*i-1); j++){
            printf("* ");
        }
        printf("\n");
    }
}