#include<stdio.h>
/**
 * main - Entry point
 *
 * prints the lowercase alphabet in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char revalphabet[] = "zyxwvutsrqponmlkjihgfedcba";

int i;
for (i = 0 ; i < 26 ; i++)
{
putchar(revalphabet[i]);
}
putchar('\n');

return (0);
}
