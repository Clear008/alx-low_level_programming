#include<stdio.h>
#include<inttypes.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int count, init;
unsigned long n1 = 1, n2 = 2, n3, max= 100000000, f1= 0, f2 = 0, f3 = 0;
for (count = 1; count <= 98; count++)
{
if (f1 > 0)
printf("%lu", f1);
init = numLength(max) - 1 - numLength(n1);
while (f1 > 0 && init > 0)
{
printf("%d", 0);
init--;
}
printf("%lu", n1);
n3 = (n1+n2) % max;
f3 = f1 + f2 + (n1+ n2) / max;
n1 = n2;
f1 = f2;
n2 = n3;
f2 = f3;
if (count != 98)
printf(", ");
else
printf("\n");
}
return (0);
}
