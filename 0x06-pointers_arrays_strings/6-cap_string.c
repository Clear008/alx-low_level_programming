#include "main.h"
/**
 * remove_extra_spaces - fonction to remove extra spaces
 * @str: string
 * Return: str
 */
char *remove_extra_spaces(char *str)
{
int i, j;
int space = 0;
for (i = j = 0; str[i] != '\0'; i++)
{
if (str[i] == ' ' || str[i] == '\t')
{
if (!space)
{
str[j++] = ' ';
space = 1;
}
}
else
{
str[j++] = str[i];
space = 0;
}
}

str[j] = '\0';
return (str);
}

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
remove_extra_spaces(str);
return (str);
}

