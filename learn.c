 #include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, guesses = 0;
    
    // Generate a random number between 1 and 100
    srand(time(0));
    number = rand() % 50 + 1;

    do {
        printf("Guess any number between 1-100: \n");
        scanf("%d", &guess);  // Corrected
        guesses++;  // Increment the number of guesses

        if (guess > number) {
            printf(". lower !\n");

       
        } else if (guess < number) {
            printf(". higher !\n");
        } else {
            printf("Woo!! You guessed it correct, bro!\n");
            printf("You guessed the number in %d tries.\n", guesses);  // Moved outside the loop
        }
    } while (guess != number);  // Corrected loop condition
    
    return 0;
}
