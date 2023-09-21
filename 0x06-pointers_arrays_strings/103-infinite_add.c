#include "main.h"
/*
 *infinite_add - function that adds two numbers.
 * @n1: number
 * @n2: number
 * @r: is the buffer that the function will use to store the result
 * @size_r: is the buffer size
 *Return: r 
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int i = 0, j = 0, k;
int sup = 0, dig1, dig2, car = 0;

while (n1[i] != '\0')
	i++;
while (n2[j] != '\0')
	j++;
if (i > j)
	sup = i;
else
	sup = j;
if (sup + 1 > size_r)
return (0);
r[sup] = '\0';
for (k = sup - 1 ; k >= 0 ; k--)
{
	i--;
	j--;
if (i >= 0)
dig1 = n1[i] - 48;
else
dig1 = 0;
if (j >= 0)
dig2 = n2[j] - 48;
else
dig2 = 0;
r[k] = (dig1 + dig2 + car) % 10 + 48;
car = (dig1 + dig2 + car) / 10;
}
if (car == 1)
{
r[sup + 1] = '\0';
if (sup + 2 > size_r)
	return (0);
while (sup-- >= 0)
	r[sup + 1] = r[sup];
r[0] = car + 48;
}
return (r);
}
