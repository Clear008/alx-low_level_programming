#include<stdio.h>
#include<inttypes.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int64_t n1 = 1, n2 = 2, n3;

int i, n = 98;
printf("%lld, %lld", (long long int)n1, (long long int)n2);
for (i = 3; i <= n; ++i)
{

n3 = n1 + n2;
if (i < n)
{
printf(", %lld", (long long int)n3);
}
else
{
printf(", %lld", (long long int)n3);
printf("\n");
}
n1 = n2;
n2 = n3;

}

return (0);
}

