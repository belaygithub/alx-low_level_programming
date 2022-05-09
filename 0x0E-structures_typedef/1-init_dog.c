#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - entry point
 * @d: passing structure at the function
 * @name: store a string for main
 * @age: store a number for main
 * @owner: store a string for main
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
