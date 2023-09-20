#include "main.h"
/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: an array of integers
 * @n: the number of elements to swap
*
*/
#include <stdio.h>

void reverse_array(int *a, int n)
{
int i, j;
int x;

for (i = 0, j = n - 1; i < j; i++, j--)
{
x = a[i];
a[i] = a[j];
a[j] = x;
}
}

