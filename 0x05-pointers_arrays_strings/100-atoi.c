#include "main.h"

/**
 * _atoi - a function that convert string to integer
 *
 * @s: the tested variable
 *
 * Return: string
 */

int _atoi(char *s)
{
	int length = 0;
	int i = 0;
	int sign = 1;
	unsigned int result = 0;

	// This block checks if there is polarity
	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}

	while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
	{
		result = (result * 10) + (s[i] - '0');
		i++;
	}
	result *= sign;
	return (result);
}
