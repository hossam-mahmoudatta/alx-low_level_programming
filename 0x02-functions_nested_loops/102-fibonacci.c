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

	for (i = 1 ; i < input ; i++)
	{
		next = first + second;
		printf("%ld%s", next, (i < input) ? ", " : "");
		first = second;
		second = next;
	}
	return (0);
}
