#include <stdio.h>
#include "dog.h"

/**
* init_dog - function first
* @d: first argument
* @name: second argument
* @age: third argument
* @owner: forth arg
*/



void init_dog(struct dog *d, char *name, float age, char *owner)
{
        if (d != NULL)
        {
        d->name = name;
        d->owner = owner;
        d->age = age;
        }
}
