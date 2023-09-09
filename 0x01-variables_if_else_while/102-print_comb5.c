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
	int firstDigit1 = 0;
	int secondDigit1 = 0;
	int firstDigit2 = 0;
	int secondDigit2 = 0;
	int i = 0;
	int j = 0;

	for (i = 0; i < 100; i++)
	{
		firstDigit1 = i / 10;
		secondDigit1 = i % 10;
		
		for (j = i; j < 100; j++)
		{
			firstDigit2 = j / 10;
			secondDigit2 = j % 10;
			
			if ((i != j) && (i <= j))
			{

				putchar(firstDigit1 + '0');
				putchar(secondDigit1 + '0');
				putchar(' ');
				putchar(firstDigit2 + '0');
				putchar(secondDigit2 + '0');
				
				if (i != 98 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
