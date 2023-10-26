#include "main.h"
/**
 * print_binary - unction that prints the binary representation of a number
 *@n: number
 */
void print_binary(unsigned long int n)
{
int i;
{
for (i = sizeof(n) * 8 - 1; i >= 0; i--)
{
int bit = (n >> i) & 1;
_putchar(bit + '0');
}
}
