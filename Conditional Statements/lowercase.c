// Check whether input character is Lower Case or not!

#include<stdio.h>
#include<ctype.h>

// int main()
// {
//     char lc;

//     printf("Enter the character : ");
//     scanf("%c", &lc);

//     if(islower(lc)){
//         printf("%c is Lower Case!", lc);
//     }
//     else{
//         printf("%c is not Lower Case!", lc);
//     }
//     return 0;
// }

// int main()
// {
//     char lc;

//     printf("Enter the character : ");
//     scanf("%c", &lc);

//     if(isupper(lc)){
//         printf("%c is Upper Case!", lc);
//     }
//     else{
//         printf("%c is not Upper Case!", lc);
//     }
//     return 0;
// }

int main()
{
    char ch;

    printf("Enter any character: ");
    scanf("%c", &ch);


    if(ch >= 'A' && ch <= 'Z')
    {
        printf("'%c' is uppercase alphabet.", ch);
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        printf("'%c' is lowercase alphabet.", ch);
    }
    else
    {
        printf("'%c' is not an alphabet.", ch);
    }

    return 0;
}