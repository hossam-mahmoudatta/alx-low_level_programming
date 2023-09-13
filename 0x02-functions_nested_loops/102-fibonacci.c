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

	for (i = 1 ; i < input ; i++)
	{
		next = first + second;
		printf("%d%s", next, (i < input) ? ", " : "");
		first = second;
		second = next;
	}
	return (0);
}
