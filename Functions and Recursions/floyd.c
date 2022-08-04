#include<stdio.h>

void floyd(int n);
int main()
{
    int n;
    printf("Enter number of rows : ");
    scanf("%d", &n);

    floyd(n);
    return 0;
}

void floyd(int n){
    int num = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
}


//Reverse Floyd Triangle

// void floyd(int n){
//     int num = 1;
//     for(int i = n; i >= 1; i--){
//         for(int j = i; j >= 1; j--){
//             printf("%d ", num);
//             num++;
//         }
//         printf("\n");
//     }
// }