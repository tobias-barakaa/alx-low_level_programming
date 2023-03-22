#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - function to initialize
 * @d: first argument
 * @name: name
 * @age: integer 
 * @owner: owner
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
