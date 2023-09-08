#include<stdio.h>
/**
 * main - Entry point
 *
 * print 0 to 9 using putchart
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int NumDigit= 0;

while (NumDigit < 10)
{
putchar(NumDigit + '0');
NumDigit++;
}
putchar('\n');
return (0);
}
