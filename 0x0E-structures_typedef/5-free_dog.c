#include <stdlib.h>
#include <stdio.h>
#include "dog.h"


/**
 * free_dog - freeing a struct
 * @d: ptr to struct dog
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
