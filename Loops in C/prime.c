// Finding if a given number is Prime or not!

#include<stdio.h>

int main()
{
    int n, flag = 0;
    printf("Enter the number you want to check for Prime : ");
    scanf("%d", &n);

    for (int i = 2; i < n/2; i++){
        if(n % i == 0){
            flag = 1;
            break;
        }
    }

if(flag == 0){
    printf("%d is Prime!", n);
}
else{
    printf("%d is not Prime!", n);
}

    return 0;
}