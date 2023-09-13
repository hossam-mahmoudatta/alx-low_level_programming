#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - app start
 *
 * Return: 0 (otherwise)
 */

int main(void)
{
	unsigned long first = 1;
	unsigned long second = 2;
	unsigned long next;
	int i = 0;
	int input = 98;

	for (i = 1 ; i <= input ; i++)
	{
		next = first + second;
        printf("%lu", next);

		if (i < input - 1)
		{
			printf(", ");
		}
		else
		{
			printf("\n");
		}
		first = second;
		second = next;
	}
	return (0);
}
