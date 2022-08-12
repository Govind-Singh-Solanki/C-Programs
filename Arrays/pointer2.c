//Verifying using Pointer   

#include<stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int *ptr;
    ptr = &arr[0];

    printf("The value of 3rd element of array is %d\n", arr[2]);
    printf("The value of 3rd element of array is %u\n", *(ptr+2));
}