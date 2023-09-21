#include "main.h"
/**
 * cap_string - function that capitalizes all words of a string.
 * @str: a string
 *
 * Return: str
 */
char *cap_string(char *str)
{
int i = 0;
int n = 1;

while (str[i] != '\0')
{
if ((str[i] >= 'a' && str[i] <= 'z') && n)
{
str[i] -= 32;
n = 0;
}
else if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
{
n = 1;
}
else
{
n = 0;
}
i++;
}

return (str);
}
