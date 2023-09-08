
#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char alphabetLowcase[] = "abcdefghijklmnopqrstuvwxyz";
char alphabetUppercase[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

int i;

for(i = 0 ;i < 26 ;i ++)
{
putchar(alphabetLowcase[i]);
}
for(i = 0 ;i < 26 ;i ++)
{
putchar(alphabetUppercase[i]);
}
putchar('\n');

return (0);
}
