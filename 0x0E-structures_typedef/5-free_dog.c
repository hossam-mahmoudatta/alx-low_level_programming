#include "dog.h"

/**
 * free_dog - Initializes a dog structure
 * @d: A dog structure.
 *
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
