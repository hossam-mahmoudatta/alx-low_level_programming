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
	int input = 98;

	for (i = 1 ; i <= input ; i++)
	{
		if (first != 20365011074)
		{
			printf("%ld, ", first);
		}
		else
		{
			printf("%ld\n", first);
		}
		next = first + second;
		first = second;
		second = next;
	}
	return (0);
}
