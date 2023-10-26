#include "main.h"
/**
 * get_endianness - a function that checks the endianness.
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int wn = 1;
	char *wc = (char *)&wn;

	if (*wc)
		return (1);
	else
		return (0);
}
