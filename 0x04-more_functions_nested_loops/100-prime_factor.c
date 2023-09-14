#include <stdio.h>
#include <math.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
*/
int main(void)
{
long long num = 612852475143LL;
long long largestPF = 0;
long long i;
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

printf("Largest Prime Factor: %lld\n", largestPF);

return (0);
}
