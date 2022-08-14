#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num, guess, attempts = 1;
    srand(time(0));
    num = rand() % 100 + 1;
    printf("I have chosen a number.\nNow its your turn to guess it!\n\n");
    printf("Guess the number between 1-100 : \n");

    do
    {
        scanf("%d", &guess);

        if (guess > num)
        {
            printf("The number you guessed is high, choose a lower number!\n");
        }
        else if (guess < num)
        {
            printf("The number you guessed is low, choose a higher number!\n");
        }
        else
        {
            printf("You guessed the number correctly in %d attempts!\n", attempts);
        }
        attempts++;
    } while (guess != num);

    return 0;
}