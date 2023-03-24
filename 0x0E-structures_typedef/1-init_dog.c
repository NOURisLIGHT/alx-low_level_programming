#include <stdlib.h>
#include <stdio.h>

/**
 * init_dog - initializes a struct dog
 * @d: ptr
 * @name: name
 * @age: age
 * @owner: owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
d = malloc(sizeof(struct dog));
d->name = name;
d->age = age;
d->owner = owner;
}