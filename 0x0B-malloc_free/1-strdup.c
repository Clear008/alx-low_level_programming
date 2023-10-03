#include "main.h"
#include<stdlib.h>

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
 * _strdup - function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given
 * as a parameter.
 * @str: a string
 * Return: NULL if str = NULL
 */
char *_strdup(char *str)
{
unsigned int len;
unsigned int i;
char *cp_str;

if (str == NULL)
return (NULL);

len = _strlen(str);

	cp_str = malloc(sizeof(char) * (len + 1));
if (cp_str == NULL)
	return (NULL);

for (i = 0; i < len; i++)
	cp_str[i] = str[i];

return (cp_str);
}
