#include "dog.h"
/**
 * init_dog - unction that initialize a variable of type struct dog
 * @d: a pointer
 * @name: dog is name
 * @age: dog is age
 * @owner: dog is owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
