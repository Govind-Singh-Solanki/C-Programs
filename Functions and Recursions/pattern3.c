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
        for(int j = 1; j <= (2*n-1); j++){
            if(j >= n-(i-1) && j <= n+(i-1)){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}