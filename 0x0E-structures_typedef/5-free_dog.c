#include "dog.h"
#include <stdlib.h>
/**
 * free_dog -the function to free memory
 * @d: the pointer to dog_t
**/

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
