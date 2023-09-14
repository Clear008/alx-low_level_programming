#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, a, b;
a = 3;
b = 5;
for (i = 1 ; i <= 100 ; i++)
{
if ((i % a == 0) && (i % b == 0))
{
printf("FizzBuzz ");
}
else if ((i % a) == 0)
{
printf("Fizz ");
}
else if ((i % b) == 0)
{
printf("Buzz ");
}

else
{
printf("%d ", i);
}
}
printf("\n");

return (0);

