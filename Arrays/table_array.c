//Creating an array of 10 integers and storing table of 5 in it!

#include<stdio.h>

int main()
{
    int arr[10];
    int n = 5;

    for(int i = 0; i < 10; i++)
    {
        int ans = n *(i+1);
        arr[i] = ans;
    }

    for(int i = 0; i < 10; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}