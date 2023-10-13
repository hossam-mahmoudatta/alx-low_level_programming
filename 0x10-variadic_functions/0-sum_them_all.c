#include "main.h"

/**
 * sum_them_all - multiplies two positive numbers
 *
 * @n: Test var
 *
 * Return: int
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list argsHolder;
	va_start(argsHolder, n);
	int sum = 0;
	unsigned int i;

	if ( n == 0)
		return (0);

	for (i = 0 ; i < n ; i++)
		sum += va_arg(argsHolder, int);

	va_end(argsHolder);

	return (sum);
}
