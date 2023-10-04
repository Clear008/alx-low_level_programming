#include <stdio.h>
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
 * argstostr - function that concatenates all the arguments of your program.
 * @ac: number of arguments
 * @av: array of arguments
 * Return: a pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
int i, j;
int k = 0;
int t_length = 0;
char *str;

if (ac == 0 || av == NULL)
return (NULL);


for (i = 0; i < ac; i++)
{
t_length += _strlen(av[i]) + 1;
}

str = malloc(sizeof(char) * t_length + 1);
if (str == NULL)
return (NULL);

for (i = 0; i < ac ; i++)
{
for (j = 0; av[i][j] != '\0'; j++, k++)
{
str[k] = av[i][j];
}
str[k] = '\n';
k++;
}
str[k] = '\0';
return (str);
}

