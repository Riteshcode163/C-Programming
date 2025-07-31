#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, guesses = 0;

    srand(time(0));
    number = rand() % 100 + 1;

    printf("choose the number \n");
    do
    {
        scanf("%d", &guess);
        guesses++;

        if (guesses == 10)
        {
            printf("YOU CAN ONLY GUESS MAXIMUM FOR 10 TIMES BETTER LUCK NEXT TIME");
            break;
        }

        if (guess < number)
        {
            printf("guess higher \n");
        }
        else if (guess > number)
        {
            printf("guess lower \n");
        }
        else
        {
            printf("yay!! you guess correct \n ");
        }

    } while (guess != number);

    if (guess == number)
    {
        printf("congarulation you guess number in %d tries", guesses);
    }

    return 0;
}

/*
srand(time(0));
number = rand() % 50 + 2;

srand(time(0));
number = rand() % 100 + 1
*/