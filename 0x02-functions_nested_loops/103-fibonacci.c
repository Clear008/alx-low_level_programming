#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
unsigned long n1 = 0, n2 = 1, n3;
float sum;

while (1)
{
n3 = n1 + n2;

if (n3 > 4000000)
break;

if ((sum % 2) == 0)
sum += n3;
n1 = n2;
n2 = n3;
}
printf("%.0f\n", sum);

return (0);
}

