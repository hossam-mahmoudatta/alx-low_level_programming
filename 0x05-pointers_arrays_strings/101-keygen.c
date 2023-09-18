#include "main.h"

/**
 * main - app start
 *
 * Return: normal
 */

int main (void)
{
	int i = 0;
	int min = 1;
	int max = 100;
	int randomNumber;


	/**
	 * This block checks the polarity of the number
	 */
	srand(time(NULL));

	for (i = 0 ; i < 5 ; i++)
	{
		randomNumber = rand() % (max - min + 1) + min;
		printf("Random Number %d: %d\n", i + 1, randomNumber);
	}
	return (0);
}
