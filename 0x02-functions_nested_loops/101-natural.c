#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i,n,a,b;
a = 3;
b = 5;
for(i = 1 ; i <= 1024 ; i++)

if((i % a == 0 || i % b == 0))

printf("%d\t", i) ;

return 0;
}
