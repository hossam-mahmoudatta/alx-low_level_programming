#include "main.h"

/**
 * argstostr - function that concatenates all the 
 * arguments of your program.
 *
 * @ac: the tested variable
 * @av: the tested variable
 *
 * Return: string
 */

char *argstostr(int ac, char **av)
{
	char *argumentConcat;
	int i, j, argIndex = 0;
	int totalLength = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0 ; i < ac ; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0 ; av[i][j] != '\0' ; j++)
			totalLength++;

		totalLength++;
	}

	argumentConcat = malloc((totalLength + 1) * sizeof(char));

	if (argumentConcat == NULL)
	{
		free(argumentConcat);
		return (NULL);
	}

	for (i = 0 ; i < ac ; i++)
	{
		for ( j = 0 ; av[i][j] != '\0' ; j++)
            argumentConcat[argIndex++] = av[i][j];
		
        if (i < ac - 1)
            argumentConcat[argIndex++] = "\n ";
	}

	argumentConcat[argIndex] = '\0';

	return (argumentConcat);
}
