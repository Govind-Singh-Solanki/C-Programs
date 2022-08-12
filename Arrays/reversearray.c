//Revering an array using pointer!

#include<stdio.h>

void swap(int *ptr, int n);
int main()
{
    int n = 10;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    swap(arr, n);

    for(int i = 0; i < 10; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}

void swap(int *ptr, int n)
{
    int temp;

    for(int i = 0; i < (n/2); i++)    // (n/2) bcoz if we do it till 'n' it will reverse the array twice and return the same array!
    {
    temp = ptr[i];
    ptr[i]  = ptr[n-i-1];
    ptr[n-i-1] = temp;
    }
}