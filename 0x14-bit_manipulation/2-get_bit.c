#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: number
 * @index: an index
 * Return: the value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int mask;
if (index >= sizeof(n) * 8)
{
return (-1);
}

mask = 1UL << index;

if (n & mask)
return (1);
else
return (0);
}
