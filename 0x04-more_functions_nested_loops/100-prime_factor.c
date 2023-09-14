#include <stdio.h>
#include <math.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
*/
int main(void)
{
unsigned long int  num = 612852475143;
unsigned long int largestPF = 0;
unsigned long int i;
for (i = 2; i <= sqrt(num); i++)
{
while (num % i  == 0)
{

largestPF = i;
num = num / i;
}
}

if (num >= 2)
{
largestPF = num;
}

printf("Largest Prime Factor: %lu\n", largestPF);

return (0);
}
