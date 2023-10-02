#include "main.h"
/**
 * _strcmp - function that compares two strings
 *@s1: a string 1
 *@s2: a string 2
 *Return:  dest
*/
int _strcmp(char *s1, char *s2)
{
int i = 0;

while (s1[i] != '\0' && s2[i] != '\0')
{
if (s1[i] != s2[i])
{
return (s1[i] - s2[i]);
}
i++;
}

if (s1[i] != '\0')
{
return (1);
}
else if (s2[i] != '\0')
{
return (-1);
}

return (0);
}
