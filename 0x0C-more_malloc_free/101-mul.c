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
char *num1, *num2;
int l1, l2, len, i, carry, digit1, digit2, *p, a = 0;

num1 = argv[1], num2 = argv[2];
if (argc != 3 || !_isdigit(num1) || !_isdigit(num2))
return (98);
l1 = _strlen(num1);
l2 = _strlen(num2);
len = l1 + l2 + 1;
p = malloc(sizeof(int) * len);
if (!p)
return (1);
for (i = 0; i <= l1 + l2; i++)
p[i] = 0;
for (l1 = l1 - 1; l1 >= 0; l1--)
{
digit1 = num1[l1] - '0';
carry = 0;
for (l2 = _strlen(num2) - 1; l2 >= 0; l2--)
{
digit2 = num2[l2] - '0';
carry += p[l1 + l2 + 1] + (digit1 *digit2);
p[l1 + l2 + 1] = carry % 10;
carry /= 10;
}
if (carry > 0)
p[l1 + l2 + 1] += carry;
}
for (i = 0; i < len - 1; i++)
{
if (p[i])
a = 1;
if (a)
_putchar(p[i] + '0');
}
if (!a)
_putchar('0');
_putchar('\n');
free(p);
return (0);
}

