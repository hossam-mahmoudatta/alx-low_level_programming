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
	int value1, value2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	value1 = atoi(argv[1]);
	value2 = atoi(argv[2]);
	result = value1 * value2;

	printf("%d\n", result);

	return (0);
}
