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
	long first = 1;
	long second = 2;
	long next;
	int i = 0;
	int input = 50;

	for (i = 1 ; i <= input ; i++)
	{
		if (i != input)
		{
			next = first + second;
			printf("%ld, ", next);
			first = second;
			second = next;
		}
		else
		{
			printf("%ld\n", next);
		}
	}
	return (0);
}
