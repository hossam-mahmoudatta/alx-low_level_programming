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
	int k = 0;

	for (i = 0; i <= 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			for (k = j + 1; k <= 9; k++)
			{
				if (!(prevDigit == i && j == 0 && k == 0))
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');
					if (!(i == 7 && j == 8 && k == 9))
					{
						putchar(',');
						putchar(' ');
						prevDigit = i;
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
