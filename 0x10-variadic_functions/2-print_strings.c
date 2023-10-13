#include "variadic_functions.h"

/**
 * print_strings - function that prints numbers, followed by a new line.
 *
 * @separator: Test var
 * @n: Test var
 * @...: Test var
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *p;

	va_list argsHolder;
	va_start(argsHolder, n);

	for (i = 0 ; i < n ; i++)
	{
		if (separator != NULL && i != 0)
			printf("%s", separator);

		p = va_arg(argsHolder, char *);
		printf("%s", (p == NULL) ? "(nil)" : p);
	}

	putchar('\n');
	va_end(argsHolder);
}
