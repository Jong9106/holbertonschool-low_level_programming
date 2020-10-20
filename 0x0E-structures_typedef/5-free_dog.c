#include "dog.h"

/**
 * free_dog - Entry point
 *@d: pointer to dog_t
 *
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
