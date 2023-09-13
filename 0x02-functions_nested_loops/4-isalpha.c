#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * _islower - checks a lowercase character
 *
 * @c: letter being tested
 *
 * Return: 0 (otherwise)
 */

int _isalpha(int c)
{
	if ((c > 64) && (c < 91))
	{
		return (1);
	}
    else if ((c > 96) && (c < 123))
    {
        return (1);
    }
	else
	{
		return (0);
	}
}
