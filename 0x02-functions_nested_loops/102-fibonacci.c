#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
long long int n1 = 1, n2 = 2, n3;

int i, n = 50;
printf("%lld, %lld, ", n1, n2);
for (i = 3; i <= n; ++i)
{

n3 = n1 + n2;

printf("%lld, ", n3);
n1 = n2;
n2 = n3;

}

return (0);
}
