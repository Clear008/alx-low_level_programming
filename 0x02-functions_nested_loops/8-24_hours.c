#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *@i: for hours
 *@j: for minutes
 * Return: value
*/
void jack_bauer(void)
{
int i;
int j;
for (i = 0 ; i <= 23 ; i++)
{
for (j =i + 1 ; j <= 59 ; j++)
_putchar ((i / 10) + '0');
_putchar((i % 10) + '0');
_putchar(':');
_putchar((j / 10) + '0');
_putchar((j % 10) + '0');

}
}
