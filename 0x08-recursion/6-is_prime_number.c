#include "main.h"
/**
 * is_prime_number -  a function that returns 1
 * if the input integer is a prime number, otherwise return 0
 * @n: a number
 * @m: a number
 * Return: 1 if the input integer is a prime number, otherwise 0
 */
int find_prime(int n, int m);
int is_prime_number(int n)
{
return (find_prime(n, 2));
}

/**
 * find_prime - find a prime number
 * @n: a number
 * @m: anumber
 *Return: result
*/
int find_prime(int n, int m)
{
if (m >= n && n > 1)
	return (1);
else if (n % m == 0 || n <= 1)
	return (0);
else
	return (find_prime(n, m + 1));
}
