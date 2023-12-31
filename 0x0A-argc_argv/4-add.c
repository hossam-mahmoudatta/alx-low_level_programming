#include "main.h"

/**
 * main - Prints the program name, followed by a new line.
 *
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */

int main(int argc, char const *argv[])
{
	int argCounter, argValue, sum = 0;

	for (argCounter = 1; argCounter < argc; argCounter++)
	{
		for (argValue = 0; argv[argCounter][argValue]; argValue++)
		{
			if (argv[argCounter][argValue] < '0' || argv[argCounter][argValue] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[argCounter]);
	}
	printf("%d\n", sum);

	return (0);
}
