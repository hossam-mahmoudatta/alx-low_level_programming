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
    int first = 0;
	int second = 1;
	int next;
	int i = 0;
	int input = 50;

	for (i = 0 ; i < input ; i++)
	{
		if (i <= 1)
		{
			next = i;
		}
		else
		{
			next = first + second;
			first = second;
			second = next;
		}
		printf("%d ", next);
	}
	return (0);
}
