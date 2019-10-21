#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free struct memory
 * @d: struct to free
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->age);
	free(d->owner);
	free(d);
}