#include "main.h"
/**
 * _sqrt_recursion - a function that returns the natural
 * square root of a number.
 * @n: a number
 * @v: value
 * Return:  the natural square root of a number
*/
int _square_rt(int n, int v);
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (_square_rt(n, 1));
}


/**
 * _square_rt - find squar root
 *@n: number
 *@v: value
 *Return: result
 */
int _square_rt(int n, int v)
{
if (v * v == n)
	return (v);
else if (v * v < n)
	return (_square_rt(n, v + 1));
else
	return (-1);
}
