#include "main.h"
/**
 * swap_int -  swaps the values of two integers.
 * @a: is an integer
 * @b: is an integer
*/
void swap_int(int *a, int *b)
{
int tempo = *a;
*a = *b;
*b = tempo;
}
