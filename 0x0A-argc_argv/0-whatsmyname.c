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
	(void) argc;
	
	printf("%s\n", argv[0]);

	return (0);
}