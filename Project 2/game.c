// Program to make a Snake, Water and Gun game!

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int swg(char user, char comp)
{

    // return 1 if user wins, -1 if comp wins and 0 if game is draw!

    if (user == comp)
    {
        return 0;
    }
    if (user == 's' && comp == 'w')
    {
        return 1;
    }
    else if (user == 'w' && comp == 's')
    {
        return -1;
    }
    if (user == 'w' && comp == 'g')
    {
        return 1;
    }
    else if (user == 'g' && comp == 'w')
    {
        return -1;
    }
    if (user == 'g' && comp == 's')
    {
        return 1;
    }
    else if (user == 's' && comp == 'g')
    {
        return -1;
    }
}

int main()
{
    char user, comp;
    srand(time(0));
    int num = rand() % 100 + 1;     //random number between 1 and 100, if +1 removed than between 0 and 100

    if (num < 33)
    {
        comp = 's';
    }
    else if (num > 33 && num < 66)
    {
        comp = 'w';
    }
    else
    {
        comp = 'g';
    }

    printf("Enter 's' for Snake, 'w' for Water, and 'g' for Gun : ");
    scanf("%c", &user);

    printf("You chose %c and Computer chose %c ---> ", user, comp);

    int res = swg(user, comp);

    if (res == 0)
    {
        printf("Game Draw!");
    }
    else if (res == 1)
    {
        printf("You Win!");
    }
    else
    {
        printf("Computer Wins!");
    }

    return 0;
}