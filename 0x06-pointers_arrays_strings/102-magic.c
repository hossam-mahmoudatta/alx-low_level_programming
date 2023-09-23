#include "main.h"

/**
 * main - power in 10 base
 * 
 * Return: returns 10 to power exponent
 */

int base10(int n)
{
	int base = 10;

	while (n > 0)
	{
		base *= 10;
		n--;
	}
	return (base);
}
