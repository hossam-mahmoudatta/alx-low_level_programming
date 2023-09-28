#include "main.h"

/**
 * wildcmp - func that returns 1 if i/p is prime
 *
 * @s1: the tested variable
 * @s2: the tested variable
 *
 * Return: Integer
 */

int wildcmp(char *s1, char *s2)
{
	return (wildcmp(s1 - 1, s2 + 1));
}
