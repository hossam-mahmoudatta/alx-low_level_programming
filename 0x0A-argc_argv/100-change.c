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

int main(int argc, char const *argv[])
{
	int pennies1 = 0, nickels5 = 0, dimes10 = 0, quarter25 = 0, totalCoins = 0;

	if (argc != 1)
	{
		printf("Error\n");
		return (1);
	}

	int integerNum = atoi(argv[1]);

	if (integerNum < 0)
	{
		printf("0\n");
		return (0);
	}

	while (integerNum > 0)
	{
		if (integerNum > 25)
		{
			quarter25++;
			integerNum -= 25;
			totalCoins++;
		}
		
		else if (integerNum > 10)
		{
			dimes10++;
			integerNum -= 10;
			totalCoins++;
		}

		else if (integerNum > 5)
		{
			nickels5++;
			integerNum -= 5;
			totalCoins++;
		}

		else if (integerNum > 1)
		{
			pennies1++;
			integerNum -= 1;
			totalCoins++;
		}
	}

	printf("%d\n", totalCoins);

	return (0);
}
