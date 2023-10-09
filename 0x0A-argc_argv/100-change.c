#include "main.h"
/**
 * main - a program that prints the minimum number of coins
 * to make change for an amount of money.
 *
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int integerNum, totalCoins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	integerNum = atoi(argv[1]);

	while (integerNum > 0)
	{
		totalCoins++;

		if ((integerNum - 25) >= 0)
			integerNum -= 25;
		
		else if ((integerNum - 10) >= 0)
			integerNum -= 10;

		else if ((integerNum - 5) >= 0)
			integerNum -= 5;

		else if ((integerNum - 2) >= 0)
			integerNum -= 2;

		else if ((integerNum - 1) >= 0)
			integerNum -= 1;
	}
	printf("%d\n", totalCoins);

	return (0);
}
