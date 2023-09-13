#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int main(void)
{
int i,a,b;
long unsigned int sum=0;
a = 3;
b = 5;
for(i = 0 ; i <= 1024 ; i++)

if((i % a == 0 || i % b == 0))
{
    sum =sum + i;
}
printf("%d\n", sum);

return 0;
}
