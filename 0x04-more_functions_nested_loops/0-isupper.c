#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * _isupper - checks for an uppercase character
 *
 * @c: letter being tested
 *
 * Return: 0 (otherwise)
 */

int _isupper(int c)
{
	if ((c > 64) && (c < 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}