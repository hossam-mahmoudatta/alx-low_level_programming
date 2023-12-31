#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * get_op_func - returns any operation on a and b
 *
 * @s: testested var
 *
 * Return: integer
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{ "+", op_add },
		{ "-", op_sub },
		{ "*", op_mul },
		{ "/", op_div },
		{ "%", op_mod },
		{ NULL, NULL }
	};

	int i = 0;

	while (i < 10)
	{
		if ((s[0] == ops->op[i]) && (strlen(s) == 1))
			break;
		i++;
	}

	return (ops[i / 2].f);
}
