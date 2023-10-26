#include "main.h"
/**
 * flip_bits -  function that returns the number of bits
 * you would need to flip to get from one number to another.
 * @n: a number
 * @m: second number
 * Return: number of bits you need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int w_xor = n ^ m;
	unsigned int wcount = 0;
while (w_xor != 0)
{
	wcount += w_xor & 1;
	w_xor >>= 1;
}
return (wcount);
}
