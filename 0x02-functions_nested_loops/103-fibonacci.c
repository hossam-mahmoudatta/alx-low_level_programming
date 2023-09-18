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
	long sum = 0;

	for (i = 1 ; i <= input ; i++)
	{
		if ((first < 4000000) && ((first % 2) == 0))
		{
			sum = sum + first;
		}
		next = first + second;
		first = second;
		second = next;
	}
	printf("%ld\n", sum);
	return (0);
}
