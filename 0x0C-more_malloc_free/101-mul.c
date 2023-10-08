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
for (i = 0; s[i] != '\0'; i++)
{
if (!isdigit(s[i]))
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
int i;
	if (arg != 3)
{
	printf("Error\n");
	return (98);
}
char *num1 = argv[1];
char *num2 = argv[2];

for (i = 0; i < _strlen(num1); i++)
{
if (!_isdigit(num1[i]))
{
	printf("Error\n");
	return (98);
}
}
for (i = 0; i < _strlen(num2); i++)
{
if (!_isdigit(num2[i]))
{
printf("Error\n");
return (98);
}
}

int i_num1 = atoi(num1);
int i_mun2 = atoi(num2);

int result = i_num1 * i_num2;
printf("%d\n", result);
return (0);
}
