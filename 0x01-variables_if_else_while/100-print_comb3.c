#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - app start
 *
 * Return: 0 (Successfully executed)
 */
int main(void)
{
	int prevDigit = -1;
	int i = 0;
	int j = 0;

	for (i = 0; i <= 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			if (!(prevDigit == i && j == 0))
			{
				putchar(i + '0');
				putchar(j + '0');
				if (i < 9)
				{
					if (!(i == 8 && j == 9))
					{
						putchar(',');
						putchar(' ');
					}
					prevDigit = i;
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
