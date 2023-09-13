#include "main.h"
#include<stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98
 *
 *Return: value
*/
void print_to_98(int n)
{
int i;
int j;
if (n < 98)
{
for(i = n; i <= 98 ; n++)
{
printf("%d, ",i);
}
}
if (n > 98){
for(j = n ; j > 98 ; j --)
{
printf("%d, ",j);
}
}
if (n == 98)
{
printf("%d",n);
}
}
