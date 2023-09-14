#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * _isdigit - checks if a value is a digit or not
 *
 * @c: letter being tested
 *
 * Return: 1 (otherwise)
 */

int _isdigit(int c)
{
	if ((c > 47) && (c < 58))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
