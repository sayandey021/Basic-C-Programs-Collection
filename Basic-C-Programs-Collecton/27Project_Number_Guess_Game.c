#include <stdio.h>
#include <stdlib.h> // For rand() and srand()
#include <time.h>   // For time()

int main() {
    int n, i;

    // Seed the random number generator with the current time
    srand(time(0));

    // Generate a random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;
    int num_of_guess = 0; // Initialize the guess counter
    int guess;

    printf("Welcome to the Number Guessing Game!\n");
    printf("Guess a number between 1 and 100.\n");

    do {
        printf("Guess the number: ");
        scanf("%d", &guess); // Fix: Use &guess to store the input

        if (guess < randomNumber) {
            printf("Higher number please!\n");
        } else if (guess > randomNumber) {
            printf("Lower number please!\n");
        } else {
            printf("Congratulations! You guessed it right!\n");
        }

        num_of_guess++; // Increment the guess counter
    } while (guess != randomNumber);

    printf("You guessed the number in %d attempts.\n", num_of_guess);

    return 0;
}