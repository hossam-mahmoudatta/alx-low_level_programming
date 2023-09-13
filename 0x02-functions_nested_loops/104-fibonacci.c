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
	unsigned long fibo1_half1, fibo1_half2, fibo2_half1, fibo2_half2;
	unsigned long next, i;

	for (i = 0 ; i < 92 ; i++)
	{
		printf("%lu, ", first);
		next = first + second;
		first = second;
		second = next;
	}

	fibo1_half1 = first / 1000000000;
	fibo2_half1 = second / 1000000000;
	fibo1_half2 = first % 1000000000;
	fibo2_half2 = second % 1000000000;

	for (i = 93 ; i < 99 ; i++)
	{
		printf(", %lu", fibo2_half1 + (fibo2_half2 / 1000000000));
		printf("%lu", fibo2_half2 % 1000000000);

		fibo2_half1 = fibo2_half1 + fibo1_half1;
		fibo1_half1 = fibo2_half1 - fibo1_half1;
		fibo2_half2 = fibo2_half2 + fibo1_half2;
		fibo1_half2 = fibo2_half2 - fibo1_half2;
	}
	printf("\n");
	return (0);
}
