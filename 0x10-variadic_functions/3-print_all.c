#include "variadic_functions.h"

/**
 * charFormater - formats character
 *
 * @separator: Test var
 * @argPointer: Test var
 *
 * Return: void
 */

void charFormater(char *separator, va_list argPointer)
{
	printf("%s%c", separator, va_arg(argPointer, int));
}

/**
 * intFormater - formats integer
 *
 * @separator: Test var
 * @argPointer: Test var
 *
 * Return: void
 */

void intFormater(char *separator, va_list argPointer)
{
	printf("%s%d", separator, va_arg(argPointer, int));
}

/**
 * floatFormater - formats float
 *
 * @separator: Test var
 * @argPointer: Test var
 *
 * Return: void
 */

void floatFormater(char *separator, va_list argPointer)
{
	printf("%s%f", separator, va_arg(argPointer, double));
}

/**
 * stringFormater - formats string
 *
 * @separator: Test var
 * @argPointer: Test var
 *
 * Return: void
 */

void stringFormater(char *separator, va_list argPointer)
{
	char *str = va_arg(argPointer, char *);

	switch ((int)(!str))
	{
		case 1:
			str = "(nil)";
	}
	printf("%s%s", separator, str);
}


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
	 int i = 0, j;
	char *separator = "";
	va_list argsHolder;

	token_t tokens[] = {
		{"c", charFormater},
		{"i", intFormater},
		{"f", floatFormater},
		{"s", stringFormater},
		{NULL, NULL}
	};

	va_start(argsHolder, format);

	while (format && format[i])
	{
		j = 0;
		while (tokens[j].token)
		{
			if (format[i] == tokens[j].token[0])
			{
				tokens[j].f(separator, argsHolder);
				separator = ", ";
			}
			j++;
		}
		i++;
	}

	putchar('\n');
	va_end(argsHolder);
}
