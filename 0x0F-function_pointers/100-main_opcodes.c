#include "function_pointers.h"

/**
 * main - Write a program that prints the opcodes of its own main function
 *
 * @argc: number of input args
 * @argv: the content of those argc
 *
 * Return: 0
 */

int main(int argc, char **argv[])
{
	char *p = (char *)main;
	int value;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	value = atoi(argv[1]);

	if (value < 0)
	{
		printf("Error\n");
		exit(2);
	}

	while (value--)
	{
		printf("02hhx%s", *p++, value ? " " : "\n");
	}

	return (0);
}
