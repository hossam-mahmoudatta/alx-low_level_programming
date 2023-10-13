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
	int num = 0;
	int i, j;

	for (i = 0 ; i < n ; i++)
	{
		num = va_arg(argsHolder, int);
		sum += num;
	}

	va_end(argsHolder);

	return (sum);
}
