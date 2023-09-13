#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
long int n1 = 1, n2 = 2, n3;

int i, n = 50;
printf("%ld, %ld", n1, n2);
for (i = 3; i <= n; ++i)
{

n3 = n1 + n2;
if (i < n)
{
printf(", %ld", n3);
}
else
{
printf(", %ld ", n3);
printf("\n");
}
n1 = n2;
n2 = n3;

}

return (0);
}
