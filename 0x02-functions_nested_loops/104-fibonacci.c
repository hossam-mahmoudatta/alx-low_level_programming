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
		if (first != 218922995834555169026)
		{
			printf("%lu, ", first);
		}
		else
		{
			printf("%lu\n", first);
		}
		next = first + second;
		first = second;
		second = next;
	}
	return (0);
}
