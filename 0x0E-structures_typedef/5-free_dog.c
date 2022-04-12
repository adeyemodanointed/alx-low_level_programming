#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free memory for dog
 * @d: address to be freed
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d->age);
	free(d);
}
