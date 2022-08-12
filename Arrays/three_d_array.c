// Program to print address of elements of a 3-D array in increasing order!

#include <stdio.h>

int main()
{
    int arr[2][2][2];

    printf("Enter the elements of array : ");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                scanf("%d", &arr[i][j][k]);
            }
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                printf("%u ", &arr[i][j][k]);
            }
        }
        // printf("\n");
    }

    return 0;
}