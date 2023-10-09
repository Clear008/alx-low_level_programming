#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *_isdigit  - check if a string contain a non digit
 *@c: is a string to be checked
 *Return: 1 if c is lowercase 0 otherwise
*/

int _isdigit(char *c)
{
int i;
for (i = 0; c[i] != '\0'; i++)
{
if (c[i] < 48 || c[i] > 57)
{
return (0);
}
}
return (1);
}

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
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *Return: always 0
 */
int main(int argc, char *argv[])
{
char *s1, *s2;
int len1, len2, len, i, carry, digit1, digit2, *result, a = 0;

s1 = argv[1], s2 = argv[2];
if (argc != 3 || !_isdigit(s1) || !_isdigit(s2))
return (98);
len1 = _strlen(s1);
len2 = _strlen(s2);
len = len1 + len2 + 1;
result = malloc(sizeof(int) * len);
if (!result)
return (1);
for (i = 0; i <= len1 + len2; i++)
result[i] = 0;
for (len1 = len1 - 1; len1 >= 0; len1--)
{
digit1 = s1[len1] - '0';
carry = 0;
for (len2 = _strlen(s2) - 1; len2 >= 0; len2--)
{
digit2 = s2[len2] - '0';
carry += result[len1 + len2 + 1] + (digit1 *digit2);
result[len1 + len2 + 1] = carry % 10;
carry /= 10;
}
if (carry > 0)
result[len1 + len2 + 1] += carry;
}
for (i = 0; i < len - 1; i++)
{
if (result[i])
a = 1;
if (a)
_putchar(result[i] + '0');
}
if (!a)
_putchar('0');
_putchar('\n');
free(result);
return (0);
}

