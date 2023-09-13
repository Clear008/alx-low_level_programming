#include "main.h"
#include<stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98
 *
 *Return: value
*/
void print_to_98(int n)
{
if (n==98)
printf("98\t");

else if (n > 98 )
printf("%d,\t",n);
n--;

else
printf("%d,\t",n);
n++
}
