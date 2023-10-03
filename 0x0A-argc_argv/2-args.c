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
	int arg;

    for (arg = 0; arg < argc; arg++)
    {
		printf("%s\n", argv[arg]);
    }

	return (0);
}