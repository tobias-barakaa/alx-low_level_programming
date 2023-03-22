/**
 * init_dog - initializes
 * @d: pointer
 * @name: name
 * @age: age
 * @owner: owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
        if (d == NULL)
                d = malloc(sizeof(struct dog));
        d->name = name;
        d->age = age;
        d->owner = owner;
}
