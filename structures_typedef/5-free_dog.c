#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free all
 * @d: pointer to free
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
