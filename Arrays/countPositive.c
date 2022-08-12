//Program to count number of negative numbers in an array!

#include<stdio.h>

int main()
{
    int n;
    printf("Enter total number of elements in array : ");
    scanf("%d", &n);

    int arr[n];
    int count = 0;

    for(int i = 0; i < n; i++)
    {
        printf("Enter element %d : ", i+1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if(arr[i] >= 0)
        {
            count++;
        }
    }
    printf("\nTotal number of positive numbers in array = %d", count);

    return 0;
}