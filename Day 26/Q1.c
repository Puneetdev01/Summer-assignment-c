#include <stdio.h>
#include <stdlib.h>

int main() {
    int number = 7, guess;

    do {
        printf("Guess a number (1-10): ");
        scanf("%d", &guess);

        if (guess > number)
            printf("Too high!\n");
        else if (guess < number)
            printf("Too low!\n");
        else
            printf("Correct guess!\n");

    } while (guess != number);

    return 0;
}