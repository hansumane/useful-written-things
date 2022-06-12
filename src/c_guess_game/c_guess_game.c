#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

    srand(time(0));

    unsigned guess, value = rand() % 100 + 1;

    do {
        printf("Guess the value between 1 and 100: ");
        scanf("%u", &guess); getchar();
        if (guess > value)
            printf("Your guess is bigger >!\n");
        else if (guess < value)
            printf("Your guess is smaller <!\n");
        else
            printf("Congratulations! You have guessed %u!\n", value);
    } while (guess != value);

    return 0;

}
