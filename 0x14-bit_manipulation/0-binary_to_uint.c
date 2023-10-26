#include "main.h"
/**
 * binary_to_uint - function that converts a binary to decimal
 * @b: binary string
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
int i;
char n;
unsigned int r = 0;

if (b == NULL)
return (0);


for (i = 0; b[i] != '\0'; i++)
{
char n = b[i];
if (n != '0' && n != '1')
{
return (0);
}

r = (r << 1) + (n - '0');
}

return (r);
}
