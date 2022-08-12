#include<stdio.h>


int main()
{
    int arr[3][2];  //3 represents no. of rows and 2 represents no. of columns
    
    printf("Enter elements of array : ");
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}



/*
int main()
{
    int n, m;
    int arr[n][m];  //n and m are total rows and columns respectively!
    
    printf("Enter rows in array : ");
    scanf("%d", &n);

    printf("Enter columns in array : ");
    scanf("%d", &m);

    printf("Enter elements of array : ");
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
*/