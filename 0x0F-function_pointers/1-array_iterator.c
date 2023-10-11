#include "main.h"

/**
 * array_iterator - preints the name of the file
 * 
 * @array: The tested variable.
 * @size: The tested variable.
 * @action: The tested variable.
 *
 * Return: Vouid
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
