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
if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
|| str[i] == '.' || str[i] == ',' || str[i] == ';'
|| str[i] == '!' || str[i] == '?' || str[i] == '"' ||
str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
{
n = 1;

}
else if (n)
{
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] -= 32;
}
n = 0;

}
else
{
if (str[i] >= 'A' && str[i] <= 'Z')
{
str[i] += 32;
}

n = 0;
}
i++;
}

return (str);
}
