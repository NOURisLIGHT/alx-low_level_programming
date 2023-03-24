#include <stdlib.h>
#include <stdio.h>
#include "dog.h"


/**
 * print_dog - prints info about dog
 * @d: ptr to struct dog
 */
void print_dog(struct dog *d)
{
if (d == NULL)
return;
if (d->name == NULL)
d->name = "(nil)";
if (d->owner == NULL)
d->owner = "(nil)";

printf("Name: %s\nAge: %lu\nOwner: %s\n", d->name, d->age, d->owner);
}

