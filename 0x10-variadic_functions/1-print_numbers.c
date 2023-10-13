#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, followed by a new line.
 *
 * @separator: Test var
 * @n: Test var
 * @...: Test var
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list argsHolder;

	va_start(argsHolder, n);

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", va_arg(argsHolder, int));

		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}

	putchar('\n');
	va_end(argsHolder);
}
