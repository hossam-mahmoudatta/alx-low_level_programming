#include "variadic_functions.h"

/**
 * print_all - a function that prints anything.
 *
 * @format: Test var
 * @...: Test var
 *
 * Return: void
 */

void print_all(const char *const format, ...)
{
	unsigned int i;
	char *testString;
	va_list argsHolder;

	va_start(argsHolder, n);

	for (i = 0 ; i < n ; i++)
	{
		if (separator != NULL && i != 0)
			printf("%s", separator);

		p = va_arg(argsHolder, char *);
		printf("%s", (testString == NULL) ? "(nil)" : testString);
	}

	putchar('\n');
	va_end(argsHolder);
}
