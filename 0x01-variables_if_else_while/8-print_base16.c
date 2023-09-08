#include<stdio.h>
/**
 * Main -entry point 
 *
 * Printing all the numbers of base 16 in lowercase
 *
 * Return always 0 (success)
 */
int main(void)
{
int i;

char hex[]= {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};
for (i = 0 ; i < 16 ; i++)
{
putchar(hex[i]);
}

putchar('\n');
return (0);
}
