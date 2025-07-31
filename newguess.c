#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, guesses = 0;

    srand(time(0));
    number = rand() % 50 + 1;

    printf("guess the number");
    scanf("%d", &guess);
    guesses++;

    while (guess != number)
    {
        if (guess < number)
        {
            printf("guess higher");
            
        }
        else if (guess > number)
        {
            printf("guess lower");
            
        }
        else if(guess==number)
        {
            printf("yay!! you guess correct in %d tries", guesses);
            
        }
    }
        
    return 0;
}