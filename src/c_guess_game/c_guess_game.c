#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int true_random(int min, int max)
{
	unsigned temp;
	FILE *dev_random = fopen("/dev/random", "rb");
	fread(&temp, sizeof(temp), 1, dev_random);
	fclose(dev_random);
	int result = temp % (max - min + 1) + min;
	return result;
}

int main(void)
{
	int guess, value = true_random(1, 100);

	do {
		printf("Guess the value between 1 and 100: ");
		scanf("%d", &guess); getchar();
		if (guess > value)
			printf("Your guess is bigger >!\n");
		else if (guess < value)
			printf("Your guess is smaller <!\n");
		else
			printf("Congratulations! You have guessed %u!\n", value);
	} while (guess != value);

	return 0;
}
