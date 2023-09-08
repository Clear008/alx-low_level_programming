#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char alphabetLowcase[] = "abcdefghijklmnopqrstuvwxyz";

int i;

for (i = 0 ; i < 26 ; i++)
{
if (i != 4 && i != 16)
putchar(alphabetLowcase[i]);
}
putchar('\n');

return (0);
}
