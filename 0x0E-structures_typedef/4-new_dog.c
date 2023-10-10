#include<stdlib.h>
#include "dog.h"
/**
 *_strlen - returns the length of a string.
 *@s: a poniter
 *Return: length
*/
int _strlen(char *s)
{
int length = 0;
while (s[length] != '\0')
{
length++;
}
return (length);
}

/**
 *_strcpy - opies the string pointed to by src,
 *including the terminating null byte (\0), to the buffer pointed to by dest
 *@dest: a string
 *@src: a string
 *Return: value the pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
int i = 0;
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}
/**
 * new_dog - function that creates a new dog
 * @name: dog is name
 * @age: dog is age
 * @owner: dog is owner
 * Return: to apointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;

	dog = malloc(sizeof(dog_t));
if (dog == NULL)
	return (NULL);
dog->name = malloc(_strlen(name) + 1);

if (dog->name == NULL)
{
free(dog);
return (NULL);
}
_strcpy(dog->name, name);
dog->age = age;

dog->owner = malloc(_strlen(owner) + 1);
if (dog->owner == NULL)
{
free(dog->name);
free(dog);
return (NULL);
}
_strcpy(dog->owner, owner);

return (dog);
}
