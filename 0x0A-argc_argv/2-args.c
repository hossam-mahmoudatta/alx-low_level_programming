#include "main.h"

/**
 * main - Prints the program name, followed by a new line.
 *
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	
    while (argc >= 0)
    {
		printf("%s\n", argv[argc]);
		argc--;
    }

	return (0);
}