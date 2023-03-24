#include <stdlib.h>
#include <stdio.h>
#include "dog.h"


/**
 * print_dog - prints info about dog
 * @d: ptr to struct dog
 */
void print_dog(struct dog *d)
{
if (d->name == NULL)
printf("Name: (nil)");
else
printf("Name: %s", d->name);
if (d->age == NULL)
printf("Age: (nil)");
else
printf("Age: %lu", d->age);
if (d->owner == NULL)
printf("Owner: (nil)");
else
printf("Owner: %s", d->owner);
}
