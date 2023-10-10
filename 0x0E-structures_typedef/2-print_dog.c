#include "dog.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * print_dog - function that prints a struct dog
 * @d: a pointer
 */
void print_dog(struct dog *d)
{

if (d != NULL)
{
if (d->name == NULL)
printf("Name: (nil)\n");

else

printf("Name:%s\n", d->name);
printf("age:%f\n", d->age);
printf("owner:%s\n", d->owner);
}
}
