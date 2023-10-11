#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - returns sum of a and b
 *
 * @a: testested var
 * @b: testested var
 *
 * Return: integer
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns difference of a and b
 *
 * @a: testested var
 * @b: testested var
 *
 * Return: integer
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns product of a and b
 *
 * @a: testested var
 * @b: testested var
 *
 * Return: integer
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns quotient of a and b
 *
 * @a: testested var
 * @b: testested var
 *
 * Return: integer
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - returns remainder of a and b
 *
 * @a: testested var
 * @b: testested var
 *
 * Return: integer
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
