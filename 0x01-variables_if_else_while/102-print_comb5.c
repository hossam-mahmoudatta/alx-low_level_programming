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

	for (int i = 0; i < 100; i++)
	{
		firstDigit1 = i / 10;     // Extract the first digit of the first number
		secondDigit1 = i % 10;    // Extract the second digit of the first number
		
		for (int j = i; j < 100; j++)
		{
			firstDigit2 = j / 10; // Extract the first digit of the second number
			secondDigit2 = j % 10; // Extract the second digit of the second number
			
			// Check if the combination should be printed (in ascending order)
			if ((i != j) && (i <= j))
			{
				// Print the first two-digit number with leading zeros if needed
				putchar(firstDigit1 + '0');
				putchar(secondDigit1 + '0');
				
				// Print the separator
				putchar(' ');
				
				// Print the second two-digit number with leading zeros if needed
				putchar(firstDigit2 + '0');
				putchar(secondDigit2 + '0');
				
				// Print the comma and space if it's not the last combination
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
