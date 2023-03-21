#ifndef _HEADER_
#define _HEADER_

/**
* init_dog - function first
* @d: first argument
* @name: second argument
* @age: third argument
* @owner: forth arg
*/

void init_dog(struct dog *d, char *name, float age, char *owner);

struct dog
{
	char *name;
	char *owner;
	float age;
}

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d.name = name;
	d.owner = owner;
	d.age = age;
}
#endif
